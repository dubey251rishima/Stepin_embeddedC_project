#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED

/**
 * @file activity3.h
 * @author Rishima Kumari
 * @brief This is a Header File for activity3
 * @version 0.1
 * @date 2021-09-15
 *
 * @copyright Copyright (c) 2021
 *
 */

/**
 * Macro Definitions
 */
#define PWM_20_PERCENT (205) /**< This is for Output PWM for 20% duty cycle */
#define PWM_40_PERCENT (410) /**< This is for Output PWM for 40% duty cycle */
#define PWM_70_PERCENT (717) /**< This is for Output PWM for 70% duty cycle */
#define PWM_95_PERCENT (973) /**< This is for Output PWM for 95% duty cycle */

/**
 * Include files
 */
#include <util/delay.h>
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Function to Initialize Timer registers
 *
 */
void Timer();

/**
 * @brief Producing duty cycle in PWM according to the input ADC values
 *
 * @param[in] temp The ADC value from activity2
 */
void PWM(uint16_t temp);



#endif // ACTIVITY3_H_INCLUDED
