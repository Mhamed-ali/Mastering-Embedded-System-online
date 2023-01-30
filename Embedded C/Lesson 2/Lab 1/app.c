#include "uart.h"

unsigned char String_buffer[100] = "Learn_In_Depth:Mohamed" ;
void main(void)
{
    Uart_Send_String(String_buffer);
}