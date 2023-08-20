/* EXTI0 Initialization */
void MEXTI0_Vid_Init(void)
{
	#if MEXTI0_SET_SENSE_CONTROL == MEXTI_LOW_LEVEL
		CLR_BIT(MCUCR, ISC00);
		CLR_BIT(MCUCR, ISC01);

	#elif MEXTI0_SET_SENSE_CONTROL == MEXTI_ANY_LOGICAL_CHANGE
		SET_BIT(MCUCR, ISC00);
		CLR_BIT(MCUCR, ISC01);

	#elif MEXTI0_SET_SENSE_CONTROL == MEXTI_FALLING_EDGE
		CLR_BIT(MCUCR, ISC00);
		SET_BIT(MCUCR, ISC01);

	#elif MEXTI0_SET_SENSE_CONTROL == MEXTI_RISING_EDGE
		SET_BIT(MCUCR, ISC00);
		CLR_BIT(MCUCR, ISC01);

	#else
		#error"Sense Control Option is not Valid"

	#endif

	/* Enable EXTI0 in GICR */
	SET_BIT(GICR, INT0);
}

/* EXTI1 Initialization */
void MEXTI1_Vid_Init(void)
{
	#if MEXTI1_SET_SENSE_CONTROL == MEXTI_LOW_LEVEL
		CLR_BIT(MCUCR, ISC10);
		CLR_BIT(MCUCR, ISC11);

	#elif MEXTI1_SET_SENSE_CONTROL == MEXTI_ANY_LOGICAL_CHANGE
		SET_BIT(MCUCR, ISC10);
		CLR_BIT(MCUCR, ISC11);

	#elif MEXTI1_SET_SENSE_CONTROL == MEXTI_FALLING_EDGE
		CLR_BIT(MCUCR, ISC10);
		SET_BIT(MCUCR, ISC11);

	#elif MEXTI1_SET_SENSE_CONTROL == MEXTI_RISING_EDGE
		SET_BIT(MCUCR, ISC10);
		CLR_BIT(MCUCR, ISC11);

	#else
		#error"Sense Control Option is not Valid"

	#endif

	/* Enable EXTI1 in GICR */
	SET_BIT(GICR, INT1);
}

}

}
