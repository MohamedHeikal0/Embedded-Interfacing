/*
 * dio_hw.h
 *
 * Created: 4/6/2020 11:49:16 AM
 *  Author: Heikal
 */ 


#ifndef DIO_HW_H_
#define DIO_HW_H_

#define DDRA_REG		*((volatile uint8*)0x3A)
#define DDRB_REG		*((volatile uint8*)0x37)
#define PINA_REG		*((const volatile uint8*)0x39 )
#define PINB_REG		*((const volatile uint8*)0x36 )
#define PORTA_REG		*((volatile uint8*)0x3B)
#define PORTB_REG		*((volatile uint8*)0x38)





#endif /* DIO_HW_H_ */