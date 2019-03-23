/*
===============================================================================
 Name        : Rupin.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/

#if defined (__USE_LPCOPEN)
#if defined(NO_BOARD_LIB)
#include "chip.h"
#else
#include "board.h"
#endif
#endif

#include <cr_section_macros.h>
void DelayFunc(uint32_t);

// TODO: insert other include files here

// TODO: insert other definitions and declarations here

int main(void) {

#if defined (__USE_LPCOPEN)
    // Read clock settings and update SystemCoreClock variable
    SystemCoreClockUpdate();
#if !defined(NO_BOARD_LIB)
    // Set up and initialize all required blocks and
    // functions related to the board hardware
    Board_Init();
    // Set the LED to the state of "On"
  //  bool off_l = true;
 //   bool On_l = false;
 //   Board_LED_Set(0, Off_l);
#endif
#endif

    // TODO: insert code here
//Chip_GPIO_WriteDirBit(LPC_GPIO,0,22,true);
//Chip_GPIO_WriteDirBit(LPC_GPIO,3,26,true);
//Chip_GPIO_WriteDirBit(LPC_GPIO,3,25,true);


    // Enter an infinite loop, just incrementing a counter
    while(1) {
    	//Chip_GPIO_WritePortBit(LPC_GPIO,0,22,1);
    	//DelayFunc(5);
    	//Chip_GPIO_WritePortBit(LPC_GPIO,3,26,0);
    	//DelayFunc(5);
    	//Chip_GPIO_WritePortBit(LPC_GPIO,3,25,0);
    	//DelayFunc(5);
    }
    return 1 ;
}

void DelayFunc(uint32_t value)
{
	for(uint32_t j=0;j<value;j++);
}
