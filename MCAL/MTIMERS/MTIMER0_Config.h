/*
 * MTIMER0_Config.h
 *
 *  Created on: Aug 25, 2023
 *      Author: galal
 */

#ifndef MTIMER0_CONFIG_H_
#define MTIMER0_CONFIG_H_

/* Timer0 Pre-scaler options:
 * 1- TIMER0_STOP
 * 2- TIMER0_SCALER_1
 * 3- TIMER0_SCALER_8
 * 4- TIMER0_SCALER_64
 * 5- TIMER0_SCALER_256
 * 6- TIMER0_SCALER_1024
 * 7- EXTERNAL_FALLING
 * 8- EXTERNAL_RISING
 * */
#define TIMER0_SET_PRESCALER			TIMER0_SCALER_1024

/* Timer0 mode options:
 * 1- TIMER0_NORMAL_MODE
 * 2- TIMER0_PHASECORRECT_MODE
 * 3- TIMER0_CTC_MODE
 * 4- TIMER0_FASTPWM_MODE
 * */
#define TIMER0_SET_MODE					TIMER0_FASTPWM_MODE

/* Timer0 CTC OC0 PIN options:
 * 1- TIMER0_OC0_PIN_DISCONNECTED			// All modes
 * 2- TIMER0_OC0_PIN_TOGGLE					// Normal mode, CTC mode
 * 3- TIMER0_OC0_PIN_CLR_NON_INVERTING		// All modes
 * 4- TIMER0_OC0_PIN_SET_INVERTING			// All modes
 * */
#define	TIMER0_SET_OC0_PIN_MODE			TIMER0_OC0_PIN_CLR_NON_INVERTING

#define TIMER0_ISR_VECTORS				2

#endif /* MTIMER0_CONFIG_H_ */
