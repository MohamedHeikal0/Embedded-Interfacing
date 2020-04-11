/*
 * Assignment_2.c
 *
 * Created: 4/8/2020 2:25:00 PM
 * Author : Heikal
 */ 

#include <avr/io.h>
#define F_CPU 1000000
#include <util/delay.h>
#include "bit_math.h"

int main(void)
{
	CLEAR_BIT(DDRB,0); //make Button 0 input
	CLEAR_BIT(DDRB,4); //make Button 1 input


	SET_BIT(DDRC,2); //make LED_0 output
	SET_BIT(DDRC,7); //make LED_1 output
	SET_BIT(DDRD,3); //make LED_2 output
	SET_BIT(DDRA,3); //make buzzer output
	int counter = 0;

    /* Replace with your application code */
    while (1) 
    {
		if (GET_BIT(PINB,0) == 1)
		{
			SET_BIT(PORTA,3);
		} 
		else
		{
			CLEAR_BIT(PORTA,3);
		}
		while(counter <= 3)
		{
			if (GET_BIT(PINB,0) == 1)
			{
				counter ++ ;
			} 
			if (counter == 0)
			{
				SET_BIT(PORTC,2);
			} 
			else
			{
				CLEAR_BIT(PORTC,2);
			}
			//******************************************
			if (counter == 1)
			{
				SET_BIT(PORTC,7);
			}
			else
			{
				CLEAR_BIT(PORTC,7);
			}
			//*******************************************
			if (counter == 2)
			{
				SET_BIT(PORTD,3);
			}
			else
			{
				CLEAR_BIT(PORTD,3);
			}
			
			
			
		}
    }
}

