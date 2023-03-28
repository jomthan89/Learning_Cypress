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

#define BUFFER_SIZE 128

// Variables to store the GNRMC message fields
char time[BUFFER_SIZE];
char status[BUFFER_SIZE];
char latitude[BUFFER_SIZE];
char latitude_dir[BUFFER_SIZE];
char longitude[BUFFER_SIZE];
char longitude_dir[BUFFER_SIZE];
char speed[BUFFER_SIZE];
char course[BUFFER_SIZE];
char date[BUFFER_SIZE];
char magnetic_variation[BUFFER_SIZE];

// Function to parse the GNRMC message and store the fields in the variables
void parse_gnrmc_message(char* message) {
    char* token;
    int count = 0;
    token = strtok(message, ",");
    while (token != NULL) {
        switch (count) {
            case 1: strcpy(time, token); break;
            case 2: strcpy(status, token); break;
            case 3: strcpy(latitude, token); break;
            case 4: strcpy(latitude_dir, token); break;
            case 5: strcpy(longitude, token); break;
            case 6: strcpy(longitude_dir, token); break;
            case 7: strcpy(speed, token); break;
            case 8: strcpy(course, token); break;
            case 9: strcpy(date, token); break;
            case 10: strcpy(magnetic_variation, token); break;
        }
        token = strtok(NULL, ",");
        count++;
    }
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    // Initialize UART1 and UART2
    UART1_Start();
    UART2_Start();
    
    // Buffer to store incoming characters
    char buffer[BUFFER_SIZE];
    int buffer_index = 0;
    
    UART2_PutString("Initializing...\r\n");
    UART2_PutString("Getting GPS Data...\r\n");
    //UART1_PutString("$PMTK314,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n");
    UART1_PutString("$PMTK314,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n");
    UART2_PutString("GPS data:\r\n");
    
    // Main loop
    for(;;)
    {
        // Read character from UART1
        if(UART1_GetRxBufferSize() != 0) {
            char ch = UART1_GetChar();
            UART2_PutChar(ch);
            buffer[buffer_index] = ch;
            buffer_index++;
            // Check for end of message
            if(ch == '\n') {
                // Null terminate the string
                buffer[buffer_index] = '\0';
                // Parse the GNRMC message
                UART2_PutString(buffer);
                parse_gnrmc_message(buffer);
                // Reset the buffer index
                buffer_index = 0;
                // Transmit each variable over UART2
                UART2_PutString(time);
                UART2_PutString(",");
                UART2_PutString(status);
                UART2_PutString(",");
                UART2_PutString(latitude);
                UART2_PutString(",");
                UART2_PutString(latitude_dir);
                UART2_PutString(",");
                UART2_PutString(longitude);
                UART2_PutString(",");
                UART2_PutString(longitude_dir);
                UART2_PutString(",");
                UART2_PutString(speed);
                UART2_PutString(",");
                UART2_PutString(course);
                UART2_PutString(",");
                UART2_PutString(date);
                UART2_PutString(",");
                UART2_PutString(magnetic_variation);
                UART2_PutString("\r\n");
            }
        }
    }
}


/* [] END OF FILE */
