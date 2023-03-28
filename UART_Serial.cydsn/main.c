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
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define SPACE ' '
#define TAB '\t'
#define CR  '\r'
#define LF  '\n'
#define prompt '>'

void Newline(void);

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    uint8_t usertype;
    
    UART_Serial_Start(); //Start UART
    UART_Serial_PutString("Start Serial to UART!! \r\n"); //Print String to Serial
    UART_Serial_PutString("PSoC 5LP UART Communicate Test \r\n");
    UART_Serial_PutString("Hello World! \r\n");
    UART_Serial_PutChar('>');
    
    for(;;)
    {
        /* Place your application code here. */
        /*UART_Serial_PutString("Hello World!");
        Newline();*/
        //CyDelay(500);
        
        usertype = UART_Serial_GetChar(); //Read one Character
        if(usertype)
        {
            //UART_Serial_PutChar(toupper(usertype)); //Convert lowercase to UPPERCASE
            //UART_Serial_PutChar(usertype);
            switch(usertype){
                case('1'): {
                    UART_Serial_PutString("This is Case 1");
                    Newline();
                    break;
                } 
                case('2'): {
                    UART_Serial_PutString("This is Case 2");
                    Newline();
                    break;
                }
                case ('3'): {
                    UART_Serial_PutString("This is Case 3");
                    Newline();
                    break;
                }
            }
        }
    }
    return 0;
}

void Newline (void)
{
    UART_Serial_PutString("\r\n");
    UART_Serial_PutChar('>');
}
/* [] END OF FILE */
