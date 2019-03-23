/*
 ============================================================================
 Name        : assig_1_rupi.c
 Author      : Rupinder
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#if defined (__USE_LPCOPEN)
#if defined(NO_BOARD_LIB)
#include "chip.h"
#else
#include "board.h"
#endif
#endif

 // define RED, Blue and Green LED ports and bits
#define LED0_GPIO_PORT_NUM                      0
#define LED0_GPIO_BIT_NUM                       22        /* Red LED */
#define LED1_GPIO_PORT_NUM                      3
#define LED1_GPIO_BIT_NUM                       26        /* Blue LED */
#define LED2_GPIO_PORT_NUM                      3
#define LED2_GPIO_BIT_NUM                       25        /* Green LED */

#include <cr_section_macros.h>
int x,y,z,a=0;
// TODO: insert other include files here

// TODO: insert other definitions and declarations here
void Led_Colour()
{
if(a==0)
{
x=0;y=0;z=1;
}
if(a==1)
{
x=0;y=1;z=0;
}
if(a==2)
{
x=1;y=0;z=0;
}
if(a==3)
{
x=1;y=1;z=1;
}
    /* Pin PIO0_22 is configured as GPIO pin during SystemInit */
	/* Set the PIO_22 as output */
    Chip_GPIO_WriteDirBit(LPC_GPIO, LED0_GPIO_PORT_NUM, LED0_GPIO_BIT_NUM, x);
    /* Set the PI3_26 as output */
    Chip_GPIO_WriteDirBit(LPC_GPIO, LED1_GPIO_PORT_NUM, LED1_GPIO_BIT_NUM, y);
    /* Set the PI3_25 as output */
    Chip_GPIO_WriteDirBit(LPC_GPIO, LED2_GPIO_PORT_NUM, LED2_GPIO_BIT_NUM, z);
a=a+1;
if(a==4){
a=0;}
}
int main(void) {

#if defined (__USE_LPCOPEN)
// Read clock settings and update SystemCoreClock variable
SystemCoreClockUpdate();
#if !defined(NO_BOARD_LIB)
// Set up and initialize all required blocks and
// functions related to the board hardware
Board_Init();

#endif
#endif
// counter is placed
// Infinite loop of counter is entered here
while(1) {
Led_Colour();
for(int b=0;b<=4000000;b++);
}}

