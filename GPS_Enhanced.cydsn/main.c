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

#define UART1_BUFFER_SIZE 64
#define UART2_BUFFER_SIZE 256
#define MESSAGE_INTERVAL_MS 1000

char uart1_rx_buffer[UART1_BUFFER_SIZE];
char uart2_tx_buffer[UART2_BUFFER_SIZE];

char* token;

float latitude, longitude, speed;
char ns_indicator, ew_indicator, timestamp[10];

CY_ISR(uart1_rx_isr)
{
    static uint8_t uart1_rx_index = 0;
    
    // Read the received data and store it in the buffer
    uart1_rx_buffer[uart1_rx_index] = GPS_UART_GetChar();
    
    // Check if the end of message character has been received
    if (uart1_rx_buffer[uart1_rx_index] == '\n') {
        
        // Null-terminate the buffer to create a C string
        uart1_rx_buffer[uart1_rx_index+1] = '\0';
        
        // Reset the buffer index
        uart1_rx_index = 0;
        
        // Parse the GNRMC message
        token = strtok(uart1_rx_buffer, ",");
        
        if (strcmp(token, "$GNRMC") == 0) {
            token = strtok(NULL, ",");
            strcpy(timestamp, token);
            token = strtok(NULL, ",");
            if (strcmp(token, "A") == 0) {
                token = strtok(NULL, ",");
                latitude = atof(token);
                token = strtok(NULL, ",");
                ns_indicator = *token;
                token = strtok(NULL, ",");
                longitude = atof(token);
                token = strtok(NULL, ",");
                ew_indicator = *token;
                token = strtok(NULL, ",");
                speed = atof(token);
            }
        }
    }
    else {
        uart1_rx_index++;
    }
}

int main(void)
{
    
    // Enable global interrupts
    CyGlobalIntEnable;
    
    // Start the message timer
    CySysTickStart();

    PW_GPS_Write(1);
    GPS_UART_Start(); // Initialize UART1
    OUTPUT_UART_Start(); // Initialize UART2

    // Enable the UART1 RX interrupt
    GPS_UART_RX_ISR_StartEx(uart1_rx_isr);
    
    // Send initial message
    OUTPUT_UART_PutString("Initializing...\r\n");
    OUTPUT_UART_PutString("Getting GPS Data...\r\n");
    GPS_UART_PutString("$PMTK314,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n");
    OUTPUT_UART_PutString("GPS data:\r\n");

    while(1)
    {
        // Check if it's time to send a message
        if (CySysTickGetValue() % (MESSAGE_INTERVAL_MS * 1000) == 0) {
            
            // Format the message
            sprintf(uart2_tx_buffer, "LAT: %f %c, LON: %f %c, SPD: %f, TIME: %s \r\n", latitude, ns_indicator, longitude, ew_indicator, speed, timestamp);
            
            // Send the message via UART2
            OUTPUT_UART_PutString(uart2_tx_buffer);
        }
    }
    return 0;
}

/* [] END OF FILE */
