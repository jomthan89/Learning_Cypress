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
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define UART1_BUFFER_SIZE 128
#define UART2_BUFFER_SIZE 128
#define MESSAGE_INTERVAL_MS 1000

// Global variables to store the GPS data
char utc_time[10];
char latitude[11];
char longitude[12];
char speed_over_ground[6];
char date[7];

char uart1_rx_buffer[UART1_BUFFER_SIZE];
uint32_t uart1_rx_buffer_pos = 0;
char uart2_tx_buffer[UART2_BUFFER_SIZE];

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

CY_ISR(uart1_rx_isr)
{
    if (UART1_GetRxBufferSize() > 0)
        {
            char rx_byte = UART1_GetChar();
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
                    //snprintf(uart2_tx_buffer, UART2_BUFFER_SIZE, "Time: %s, Lat: %s, Long: %s, Speed: %s, Date: %s\n",
                             //utc_time, latitude, longitude, speed_over_ground, date);
                   //UART_PutString(uart2_tx_buffer);
                    //UART_PutString(latitude);
                    //UART_PutString("\r\n");
                    //UART_PutString(longitude);
                    //UART_PutString("\r\n");
                    //snprintf(uart2_tx_buffer, UART2_BUFFER_SIZE, "Latitude: %s, Longtitude: %s ,Time: %s \r\n",latitude,longitude,utc_time);
                    //UART2_PutString(uart2_tx_buffer);
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

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    PW_GPS_Write(1);
    
    // Initialize UART1 and UART2
    UART1_Start();
    UART2_Start();
    
    UART1_RX_ISR_StartEx(uart1_rx_isr);
    
    UART2_PutString("Initializing...\r\n");
    UART2_PutString("Getting GPS Data...\r\n");
    //UART1_PutString("$PMTK314,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n");
    UART1_PutString("$PMTK314,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n");
    UART2_PutString("GPS data:\r\n");
    
    CySysTickStart(); //Start_Timer
    
    // Main loop
    while(1)
    {
        // Check if it's time to send a message
        if (CySysTickGetValue() % (MESSAGE_INTERVAL_MS * 1000) == 0) {
            
            snprintf(uart2_tx_buffer, UART2_BUFFER_SIZE, "Latitude: %s, Longtitude: %s ,Time: %s \r\n",latitude,longitude,utc_time);
            UART2_PutString(uart2_tx_buffer);
            
        }
        // Read data from UART1 (GPS)
        /*if (UART1_GetRxBufferSize() > 0)
        {
            char rx_byte = UART1_GetChar();
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
                    /snprintf(uart2_tx_buffer, UART2_BUFFER_SIZE, "Time: %s, Lat: %s, Long: %s, Speed: %s, Date: %s\n",
                             utc_time, latitude, longitude, speed_over_ground, date);
                   //UART_PutString(uart2_tx_buffer);
                    //UART_PutString(latitude);
                    //UART_PutString("\r\n");
                    //UART_PutString(longitude);
                    //UART_PutString("\r\n");
                    snprintf(uart2_tx_buffer, UART2_BUFFER_SIZE, "Latitude: %s, Longtitude: %s ,Time: %s \r\n",latitude,longitude,utc_time);
                    UART2_PutString(uart2_tx_buffer);
                }
                
                uart1_rx_buffer_pos = 0;
            }
            else
            {
                uart1_rx_buffer[uart1_rx_buffer_pos] = rx_byte;
                uart1_rx_buffer_pos++;
            }
        }*/
    }
    return 0;
}


/* [] END OF FILE */
