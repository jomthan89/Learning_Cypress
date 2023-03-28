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

#define UART1_BUFFER_SIZE 128
#define UART2_BUFFER_SIZE 128

// Global variables to store the GPS data
char utc_time[10];
char latitude[11];
char longitude[12];
char speed_over_ground[6];
char date[7];

// Function to parse the GNRMC message and extract the required data
void parse_gnrmc_message(char* message)
{
    // Split the message into individual fields
    char* field;
    int field_count = 0;
    field = strtok(message, ",");
    while (field != NULL)
    {
        if (field_count == 1)
        {
            // Extract the UTC time
            strncpy(utc_time, field, 10);
        }
        else if (field_count == 3)
        {
            // Extract the latitude
            strncpy(latitude, field, 11);
        }
        else if (field_count == 5)
        {
            // Extract the longitude
            strncpy(longitude, field, 12);
        }
        else if (field_count == 7)
        {
            // Extract the speed over ground
            strncpy(speed_over_ground, field, 6);
        }
        else if (field_count == 9)
        {
            // Extract the date
            strncpy(date, field, 7);
        }
        
        field = strtok(NULL, ",");
        field_count++;
    }
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    PW_GPS_Write(1); //power on GPS.
    
    UART_Start();
    GPS_Start();
    
    UART_PutString("Initializing...\r\n");
    
    CyDelay(500); // Wait for GPS module to initialize
    
    UART_PutString("Getting GPS Data...\r\n");
    //GPS_PutString("$PMTK314,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n");
    GPS_PutString("$PMTK314,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n");
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    char uart1_rx_buffer[UART1_BUFFER_SIZE];
    uint32_t uart1_rx_buffer_pos = 0;
    
    char uart2_tx_buffer[UART2_BUFFER_SIZE];
    
    while(1) //loop forever
    {
        /* Place your application code here. */
        // Read data from UART1 (GPS)
        if (GPS_GetRxBufferSize() > 0)
        {
            char rx_byte = GPS_GetChar();
            //UART_PutChar(rx_byte);
            // Check if we have received a complete message
            if (rx_byte == '\n' || uart1_rx_buffer_pos == UART1_BUFFER_SIZE - 1)
            {
                uart1_rx_buffer[uart1_rx_buffer_pos] = '\0';
                
                // Check if the message is a GNRMC message
                if (strncmp(uart1_rx_buffer, "$GNRMC", 6) == 0)
                {
                    // Parse the message and extract the required data
                    parse_gnrmc_message(uart1_rx_buffer);
                    
                    // Transmit the data over UART2
                    /*snprintf(uart2_tx_buffer, UART2_BUFFER_SIZE, "Time: %s, Lat: %s, Long: %s, Speed: %s, Date: %s\n",
                             utc_time, latitude, longitude, speed_over_ground, date);
                    UART_PutString(uart2_tx_buffer);*/
                    /*UART_PutString(latitude);
                    UART_PutString("\r\n");
                    UART_PutString(longitude);
                    UART_PutString("\r\n");*/
                    snprintf(uart2_tx_buffer, UART2_BUFFER_SIZE, "Latitude: %s, Longtitude: %s ,Time: %s \r\n",latitude,longitude,utc_time);
                    UART_PutString(uart2_tx_buffer);
                }
                
                uart1_rx_buffer_pos = 0;
            }
            else
            {
                uart1_rx_buffer[uart1_rx_buffer_pos] = rx_byte;
                uart1_rx_buffer_pos++;
            }
        }
    }
    return 0;
}

/* [] END OF FILE */
