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
#include <string.h>
#include <stdlib.h>

#define GPS_UART UART_1
#define OUTPUT_UART UART_2

// buffer for storing GPS message
char gps_buffer[256];

// variables for storing GPS data
float latitude;
float longitude;
float speed;
float course;

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    PW_GPS_Write(1); //Power on GPS
    
    // initialize UARTs
    GPS_UART_Start();
    OUTPUT_UART_Start();
   
    // send initial message via UART2
    
    OUTPUT_UART_PutString("Initializing...\r\n");
    GPS_UART_PutString("$PMTK314,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n");
    OUTPUT_UART_PutString("Waiting for GPS data...\r\n");
    
    while (1) //loop forever.
    {
        // wait until GPS message is received
        while (GPS_UART_GetRxBufferSize() == 0);
        
        // read the GPS message into buffer
        uint8_t byte;
        int i = 0;
        byte = GPS_UART_GetChar();
        if ((byte = GPS_UART_GetChar()) == '$')
        {
            gps_buffer[i++] = byte;
        }
        if ((byte = GPS_UART_GetChar()) == '\n')
       
        gps_buffer[i++] = byte;
        gps_buffer[i++] = '\0';
        
        // parse GPS message and store data in variables
        char *token;
        token = strtok(gps_buffer, ",");
        if (strcmp(token, "$GNRMC") == 0)
        {
            // skip time field
            token = strtok(NULL, ",");
            // get status field (A=valid data, V=invalid data)
            char status = *strtok(NULL, ",");
            if (status == 'A')
            {
                // get latitude and longitude fields
                token = strtok(NULL, ",");
                latitude = atof(token);
                token = strtok(NULL, ",");
                char lat_dir = *token;
                token = strtok(NULL, ",");
                longitude = atof(token);
                token = strtok(NULL, ",");
                char lon_dir = *token;
                // skip speed and course fields
                token = strtok(NULL, ",");
                token = strtok(NULL, ",");
                // get date field
                token = strtok(NULL, ",");
                // calculate and store speed and course
                speed = atof(token) * 1.852; // convert from knots to km/h
                token = strtok(NULL, ",");
                course = atof(token);
                // send GPS data via UART2
                char output_buffer[256];
                sprintf(output_buffer, "Lat: %.6f%c, Lon: %.6f%c, Speed: %.2f km/h, Course: %.2f\r\n",
                        latitude, lat_dir, longitude, lon_dir, speed, course);
                OUTPUT_UART_PutString(output_buffer);
            }
        }
        
        // wait for 1 second before checking for new GPS data
        //CyDelay(1000);
    }
}

/* [] END OF FILE */
