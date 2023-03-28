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

#define BUFFER_SIZE 80

char gps_buffer[BUFFER_SIZE];
char lat_str[12], lon_str[12], time_str[10], date_str[10];
float lat_val, lon_val;

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    PW_GPS_Write(1);
    GPS_UART_Start(); // Initialize UART1
    OUTPUT_UART_Start(); // Initialize UART2

    // Send initial message
    OUTPUT_UART_PutString("Initializing...\r\n");
    OUTPUT_UART_PutString("Getting GPS Data...\r\n");
    GPS_UART_PutString("$PMTK314,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n");
    OUTPUT_UART_PutString("GPS data:\r\n");

    while(1)
    {
        if(GPS_UART_GetRxBufferSize() > 0) // Check if there is data in UART1 buffer
        {
            char rx_char = GPS_UART_GetChar(); // Read a character from UART1

            if(rx_char == '\n') // End of GPS message
            {
                // Extract relevant data from GPS message
                sscanf(gps_buffer, "$GNRMC,%[^,],%*c,%[^,],%*c,%[^,],%*c,%[^,],%*c,%*c,%*c,%*c,%*c,%*c,%*c,%*c,%*c", &time_str, &lat_str, &lon_str, &date_str);

                // Convert latitude and longitude from string to float
                lat_val = atof(lat_str);
                lon_val = atof(lon_str);

                // Clear GPS buffer for next message
                memset(gps_buffer, 0, BUFFER_SIZE);

                // Send GPS data to UART2
                char gps_data[50];
                sprintf(gps_data, "Lat: %.6f, Lon: %.6f\r\n", lat_val, lon_val);
                OUTPUT_UART_PutString(gps_data);
            }
            else // Add character to GPS buffer
            {
                strncat(gps_buffer, &rx_char, 1);
            }
        }
        
        // Delay for one second
        //CyDelay(1000);
    }
}

/* [] END OF FILE */
