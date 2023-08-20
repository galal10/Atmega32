#ifndef MEXTI_PRIVATE_H_
#define MEXTI_PRIVATE_H_

/* Control Register : MCUCR */
#define MCUCR		*((volatile u8*)(0x55))
/* MCUCR bits */
#define ISC00							0
#define ISC01							1
#define ISC10							2
#define ISC11							3


#endif /* MEXTI_PRIVATE_H_ */
