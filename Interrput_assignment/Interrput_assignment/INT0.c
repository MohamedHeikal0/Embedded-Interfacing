/*
 * INT0.c
 *
 * Created: 4/14/2020 7:40:22 PM
 *  Author: Heikal
 */ 

#include "INT0.h"

void sevenSegment()
{
	char array[]={0,1,2,3,4,5,6,7,8,9};
	int i ;	
	for(i=0;i<=9;i++)
	{
		_delay_ms(500);
		SevenSeg_PORT = (array[i] <<4);
		_delay_ms(500); 
	}
}