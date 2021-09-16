#ifndef ACTIVITY1_C_INCLUDED
#define ACTIVITY1_C_INCLUDED

/**
 * @file activity1.c
 * @author Rishima Kumari
 * @brief defination for pins and ports to make LED ON or OFF
 * @version 0.1
 * @date 2021-09-13
 *
 * @copyright Copyright (c) 2021
 *
 */



#include "activity1.h"


void peripherals(void)
{
    DDRD |= (1<<PD2); // set PD2=1 for LED
    DDRD &= ~(1<<PD0); //clear bit
    PORTD |= (1<<PD0); //set bit PD0 for SeatSwitch
    DDRD &= ~(1<<PD1); //clear bit
    PORTD |= (1<<PD1); //set bit PD0 for HeaterSwitch
}

void LED_ON(){
    LED_PORT |= (1<<LED_PIN);
}

void LED_OFF(){
    LED_PORT &= ~(1<<LED_PIN);
}

int FLAG=0;
int LED(void)
{
       peripherals();
        if(!(PIND&(1<<BUTTON_SENSOR )) && !(PIND&(1<<TEMP_SENSOR))) //if both the switches are pressed
        {
            FLAG=1;
        }
        else  // other cases
        {
            FLAG=0;
        }
    return FLAG;
}




#endif // ACTIVITY1_C_INCLUDED
