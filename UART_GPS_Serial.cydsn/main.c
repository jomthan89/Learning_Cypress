/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//#include <PutHex.h>
#include <float.h>
//#include <OneWire.h>
#include <stdbool.h>

#define BUFFER_SIZE 128
#define GPRMC_HEADER                "$GPRMC"
#define GNRMC_HEADER                "$GNRMC"
#define GPS_MODULE_ACTIVE           0x41

#define GPS_UART_RX_BUFFER_SIZE 256

#define Min_To_Degree  0.01666666667
#define Sec_To_Degree	 0.000277777778

uint8_t GPS_UART_RX_Buffer[GPS_UART_RX_BUFFER_SIZE];
uint32_t GPS_UART_RX_Wr_Index = 0;
uint32_t GPS_UART_RX_Rd_Index = 0;
uint32_t GPS_UART_RX_Full = 0;


/*char gps_buffer[BUFFER_SIZE],
     UBLOX_9600[]              = { 0xb5, 0x62, 0x06, 0x00, 0x14, 0x00, 0x01, 0x00, 0x00, 0x00, 0xd0, 0x08, 0x00, 0x00, 0x80, 0x25, 0x00, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa2, 0xb5 }, // - UBLOX
     DISABLE_UBLOX_GPGSV[]           = { 0xb5, 0x62, 0x06, 0x01, 0x03, 0x00, 0xf0, 0x03, 0x00, 0xfd, 0x15 }, // - UBLOX
     DISABLE_UBLOX_GNGSA[]           = { 0xb5, 0x62, 0x06, 0x01, 0x03, 0x00, 0xf0, 0x02, 0x00, 0xfc, 0x13 }, // - UBLOX
     DISABLE_UBLOX_GNGLL[]           = { 0xb5, 0x62, 0x06, 0x01, 0x03, 0x00, 0xf0, 0x01, 0x00, 0xfb, 0x11 }, // - UBLOX
     DISABLE_UBLOX_GNVTG[]           = { 0xb5, 0x62, 0x06, 0x01, 0x03, 0x00, 0xf0, 0x05, 0x00, 0xff, 0x19 }  // - UBLOX
    ;
uint8_t gps_buffer_index = 0;
int flag_jamming = 0,
    count_data_jamming = 0
;*/

void NewLine (void);
void DTC_DEBUG( char * debugstr );

int DTC_DEBUG_TIMER = 0;

/*const char config_commands[] = 
    "$PUBX,40,GLL,0,0,0,0*5C\r\n" // disable GLL output
    "$PUBX,40,GGA,0,1,0,0*5A\r\n" // enable GGA output
    "$PUBX,40,VTG,0,1,0,0*5E\r\n" // enable VTG output
    "$PUBX,40,GSA,0,1,0,0*4E\r\n" // enable GSA output
    "$PUBX,40,RMC,0,1,0,0*47\r\n" // enable RMC output
    "$PUBX,41,1,0007,0003,9600,0*25\r\n" // set the uart to the binary packet protocol 9600
;*/

/*char ublock_config1[] =
    "$PUBX,41,1,0007,0003,9600,0*5C\r\n"
    "$PUBX,40,GLL,0,0,0,0*5C\r\n";*/

typedef struct GPS_GPSData
{
    double time;
	double latitude;
	double longitude;
	double Knots;
	double Date;
	char N_OR_S;
	char E_OR_W;
	char Data[750];
	char buffer[100];
	char location[100];

}GPS_GPSData;

GPS_GPSData GPS_Data;

void Get_GpsData(GPS_GPSData* GpsData);
static void NEO_GPS_Location(GPS_GPSData* GpsData);

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    uint8_t c;
    
    UART_Start();
    GPS_Start();
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    DTC_DEBUG_TIMER = 1;
    PW_GPS_Write(1);
        
    UART_PutString("Initializing \r\n");
    CyDelay(500);
    UART_PutString("Start Serial to UART!! \r\n"); //Print String to Serial
    UART_PutString("PSoC 5LP UART Communicate Test \r\n");
    UART_PutString(
        "Hello World! \r\n"
        "1&s is send ublox command \r\n"
        "3 is DISABLE_TELIT_GSV_GSA_GLL_VTG\r\n"
        "4 is ENABLE_TELIT_GSV_GSA_GLL_VTG \r\n"
        "5 is UART First Method\r\n"
        "6 is UART Second Method\r\n"
    );
    
    UART_PutChar('>');
    //UART_PutString("Sending UBlock Config Command \r\n");
    //GPS_PutString("$PUBX,41,1,0007,0003,9600,0*5C\r\n"); //set the uart to the binary packet protocol 9600
    //GPS_PutString("$PUBX,40,GLL,0,0,0,0*5C\r\n"); // request GPS Fix Data
    //UART_PutChar('>');
    //GPS_PutString(config_commands); //Set parameter
    //GPS_PutString("$PUBX,41,1,0007,0003,9600,0*16"); //set the uart to the binary packet protocol 9600
    //GPS_PutString("\r\n");
    //GPS_PutString("$PMTK253,1,9600*08\r\n"); // set the uart to the binary packet protocol 9600 for TELIT
    
    for(;;)
    {
        c = UART_GetChar();
        if(c) {
            UART_PutChar(c);
            GPS_PutChar(c);
        } //Echo
        
        /*switch(c){
        case '1':
            UART_PutString("Sending GPS Config GLL 0 ...\r\n"); //UBLOX
            GPS_PutString("$PUBX,41,1,0007,0003,9600,0*5C\r\n"); //set the uart to the binary packet protocol 9600
            GPS_PutString("$PUBX,40,GLL,0,0,0,0*5C\r\n"); // request GPS Fix Data
            break;
        case '2':
            UART_PutString("Sending GPS Config GLL 1 ...\r\n"); //UBLOX
            GPS_PutString("$PUBX,41,1,0007,0003,9600,0*5C\r\n"); //set the uart to the binary packet protocol 9600
            GPS_PutString("$PUBX,40,GLL,1,1,0,0*5C\r\n"); // request GPS Fix Data
            break;
        case '3':
            //$PMTK314,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n
            UART_PutString("$PMTK314,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n");
            UART_PutString("DISABLE_TELIT_GSV_GSA_GLL_VTG");
            GPS_PutString("$PMTK314,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n"); //DISABLE_TELIT_GSV_GSA_GLL_VTG
            break;
        case '4':
            //$PMTK314,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n
            UART_PutString("$PMTK314,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n");
            UART_PutString("ENABLE_TELIT_GSV_GSA_GLL_VTG");
            GPS_PutString("$PMTK314,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n"); //ENABLE_TELIT_GSV_GSA_GLL_VTG
            break;
        }*/
        
        if (c == '1')
        {
            UART_PutString("Sending GPS Config GLL 0 ...\r\n"); //UBLOX
            GPS_PutString("$PUBX,41,1,0007,0003,9600,0*5C\r\n"); //set the uart to the binary packet protocol 9600
            GPS_PutString("$PUBX,40,GLL,0,0,0,0*5C\r\n"); // request GPS Fix Data
        }
        if(c == '2')
        {
            UART_PutString("Sending GPS Config GLL 1 ...\r\n"); //UBLOX
            GPS_PutString("$PUBX,41,1,0007,0003,9600,0*5C\r\n"); //set the uart to the binary packet protocol 9600
            GPS_PutString("$PUBX,40,GLL,1,1,0,0*5C\r\n"); // request GPS Fix Data
        }
        if(c == '3')
        {
           //$PMTK314,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n
            UART_PutString("$PMTK314,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n");
            UART_PutString("DISABLE_TELIT_GSV_GSA_GLL_VTG");
            GPS_PutString("$PMTK314,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n"); //DISABLE_TELIT_GSV_GSA_GLL_VTG
        }
        if(c == '4')
        {
            //$PMTK314,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n
            UART_PutString("$PMTK314,1,1,1,1,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n");
            UART_PutString("ENABLE_TELIT_GSV_GSA_GLL_VTG\r\n");
            GPS_PutString("$PMTK314,1,1,1,1,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n"); //ENABLE_TELIT_GSV_GSA_GLL_VTG
        }
        //UART_PutString("Second Method\r\n");
        if (GPS_GetRxBufferSize() > 0) // First Method
        {
            while (GPS_GetRxBufferSize() > 0 && !GPS_UART_RX_Full)
            {
                GPS_UART_RX_Buffer[GPS_UART_RX_Wr_Index] = GPS_GetChar();
                GPS_UART_RX_Wr_Index++;
                if (GPS_UART_RX_Wr_Index == GPS_UART_RX_BUFFER_SIZE)
                {
                    GPS_UART_RX_Wr_Index = 0;
                    GPS_UART_RX_Full = 1;
                }
            }
        }
        
        if (UART_GetTxBufferSize() == 0 && GPS_UART_RX_Rd_Index != GPS_UART_RX_Wr_Index)
        {
            UART_PutChar(GPS_UART_RX_Buffer[GPS_UART_RX_Rd_Index]);
            GPS_UART_RX_Rd_Index++;
            if (GPS_UART_RX_Rd_Index == GPS_UART_RX_BUFFER_SIZE)
            {
                GPS_UART_RX_Rd_Index = 0;
                GPS_UART_RX_Full = 0;
            }
        }
        
        if (c == '6')
        {
            UART_PutString("Second Method\r\n");
            Get_GpsData(&GPS_Data);
        }
         /*Place your application code here. */
        /*while( 0 != GPS_GetRxBufferSize() ) {
            char buff = GPS_GetChar();
            UART_PutChar(buff);
            //DTC_DEBUG(buff);
            //UART_PutString(buff);
            //c = UART_GetChar();
            //UART_PutChar(c);
            if(buff == 0xB5) flag_jamming = 1;
            if(flag_jamming == 1)
            {
                UART_PutString("FUCK IT JAMMING DAM!!\r\n");
                flag_jamming = 0;
                break;
            }
        }*/
        //if(flag_jamming == 0) UART_PutString("Not JAMMING\r\n");
        /*if(c != NULL)
        {
            c = UART_GetChar(); //Get character from terminal
            UART_PutChar(c); //Echo to terminal 
            GPS_PutChar(c); //Send to GPS
        }*/
        
        //char buff = GPS_GetChar();
        //UART_PutChar(buff); //Print NULL
        
    }
    return 0;
}

void Get_GpsData(GPS_GPSData* GpsData)
{
    char *P;
	int n;
    if (GPS_GetRxBufferSize() > 0)
        {
            while (GPS_GetRxBufferSize() > 0 && !GPS_UART_RX_Full)
            {
                GpsData->Data[GPS_UART_RX_Wr_Index] = GPS_GetChar();
                GPS_UART_RX_Wr_Index++;
                if (GPS_UART_RX_Wr_Index == GPS_UART_RX_BUFFER_SIZE)
                {
                    GPS_UART_RX_Wr_Index = 0;
                    GPS_UART_RX_Full = 1;
                }
            }
        }
    P=strstr(GpsData->Data,"&GPRMC");
    if(*P=='G')
			{
				n=0;
				while(*(P+n)!='\n'){

					GpsData->location[n]=*(P+n);
					n++;}
					sprintf(GpsData->buffer,"%s\r\n\n",GpsData->location);
					sscanf(GpsData->buffer,"GPRMC,%lf,A,%lf,%c,%lf,%c,%lf,,%lf,,,A*64",&GpsData->time,&GpsData->latitude,&GpsData->N_OR_S,&GpsData->longitude,&GpsData->E_OR_W,&GpsData->Knots,&GpsData->Date);
					NEO_GPS_Location(GpsData);
			}
}

static void NEO_GPS_Location(GPS_GPSData* GpsData)
{
	double Deg_Val=0.0,Min_Val=0.0,Sec_Val=0.0,lon=0.0,lat=0.0;

	lon=GpsData->longitude;
	lat=GpsData->latitude;
	if(GpsData->E_OR_W=='E' && GpsData->N_OR_S=='S')
	{
		Deg_Val=(int)(lon/100);
		Min_Val=(int)(lon-(Deg_Val*100));
		Sec_Val=((lon-(Deg_Val*100))-Min_Val)*100;
		GpsData->longitude=Deg_Val+(Min_Val*Min_To_Degree)+(Sec_Val*Sec_To_Degree);

		Deg_Val=(int)((lat/100));
		Min_Val=(int)(lat-(Deg_Val*100));
		Sec_Val=((lat-(Deg_Val*100))-Min_Val)*10;
		GpsData->latitude=(Deg_Val+(Min_Val*Min_To_Degree)+(Sec_Val*Sec_To_Degree))*-1;
	}
}
void DTC_DEBUG( char * debugstr ) {
    if( DTC_DEBUG_TIMER > 0 ) {
        UART_PutString( debugstr );
    }
}

void NewLine (void)
{
    UART_PutString("\r\n");
}
/* [] END OF FILE */
