#ifndef MEXTI_INTERFACE_H_
#define MEXTI_INTERFACE_H_

#define EXTI0			0
#define EXTI1			1
#define EXTI2			2

typedef enum
{
	LOW_LEVEL = 0,
	ANY_LOGICAL_CHANGE,
	FALLING_EDGE,
	RISING_EDGE
}MEXTI_SENSE_CONTROL_t;

/* EXTI0 Initialization */
void MEXTI0_Vid_Init(void);

/* EXTI1 Initialization */
void MEXTI1_Vid_Init(void);

/* EXTI2 Initialization */
void MEXTI2_Vid_Init(void);

/* Select Sense control Register */
Error_state MEXTI_Vid_SenseControl(u8 Copy_u8_EXTI_ID, MEXTI_SENSE_CONTROL_t Copy_SenseControl);

#endif /* MEXTI_INTERFACE_H_ */
