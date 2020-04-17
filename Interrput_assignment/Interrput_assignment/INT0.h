/*
 * INT0.h
 *
 * Created: 4/14/2020 7:39:59 PM
 *  Author: Heikal
 */ 


#ifndef INT0_H_
#define INT0_H_
#include "Bit_math.h"
#define F_CPU 16000000
#include <util/delay.h>
#include <avr/interrupt.h>

#define SevenSeg_PORT   PORTA
#define SevenSeg_EN_PORT PORTB
#define SevenSeg_EN_DIR  DDRB
#define SevenSEG_EN1    (1<<1) //PB1
#define SevenSEG_EN2    (1<<2)//PB2
#define SevenSeg_direction	DDRA		
#define SevenSeg_PORT		PORTA
void sevenSegment();

#endif /* INT0_H_ */