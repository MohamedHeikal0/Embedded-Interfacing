/*
 * Interrput_assignment.c
 *
 * Created: 4/13/2020 3:04:50 PM
 * Author : Heikal
 */ 

#include <avr/io.h>
#include "INT0.h"

volatile unsigned char counter = 0 ;

ISR (INT0_vect){
	counter++;
	if(counter == 9){
		counter=0;
	}
}

int main(void)
{
	
	GICR=(1<<INT0);
	CLEAR_BIT(MCUCR,ISC00);
	SET_BIT(MCUCR,ISC01);
	sei();
	SevenSeg_direction |=(1<<4) |(1<<5) | (1<<6) | (1<<7);
	SevenSeg_EN_DIR |= SevenSEG_EN1 | SevenSEG_EN2; 
    
    while (1) 
    {
		SevenSeg_EN_PORT |= SevenSEG_EN1 | SevenSEG_EN2; 
		sevenSegment();
    }
}

