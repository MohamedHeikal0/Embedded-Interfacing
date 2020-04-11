/*
 * Assignment_1.c
 *
 * Created: 4/5/2020 3:10:52 PM
 * Author : Heikal
 */ 

#define F_CPU	1000000
#include <util/delay.h>
#include "dio.h"
#include "dio_cnfg.h"


int main(void)
{
	Dio_init();
	
    while (1) 
    {
		uint8 counter = 0;
		dio_write_channel(Dio_Channel_B0,STD_low) ;
		while (counter <= 8)
		{
			if (Dio_read_channel(Dio_Channel_B0) == STD_high)
			{
				counter++ ;
			}
			if (counter == 0)
			{
				_delay_ms(30);
				dio_write_channel(Dio_Channel_A0,STD_high);
				_delay_ms(100);
			} 
			else
			{
				dio_write_channel(Dio_Channel_A0,STD_low);
				_delay_ms(100);
			}
			//********************************************************************************************************
			if (counter == 1)
			{
				_delay_ms(30);
				dio_write_channel(Dio_Channel_A1,STD_high);
				_delay_ms(100);
			}
			else
			{
				dio_write_channel(Dio_Channel_A1,STD_low);
				_delay_ms(100);
			}
			//********************************************************************************************************
			if (counter == 2)
			{
				_delay_ms(30);
				dio_write_channel(Dio_Channel_A2,STD_high);
				_delay_ms(100);
			}
			else
			{
				dio_write_channel(Dio_Channel_A2,STD_low);
				_delay_ms(100);
			}
			//********************************************************************************************************
			if (counter == 3)
			{
				_delay_ms(30);
				dio_write_channel(Dio_Channel_A3,STD_high);
				_delay_ms(100);
			}
			else
			{
				dio_write_channel(Dio_Channel_A3,STD_low);
				_delay_ms(100);
			}
			//********************************************************************************************************
			if (counter == 4)
			{
				_delay_ms(30);
				dio_write_channel(Dio_Channel_A4,STD_high);
				_delay_ms(100);
			}
			else
			{
				dio_write_channel(Dio_Channel_A4,STD_low);
				_delay_ms(100);
			}
			//********************************************************************************************************
			if (counter == 5)
			{
				_delay_ms(30);
				dio_write_channel(Dio_Channel_A5,STD_high);
				_delay_ms(100);
			}
			else
			{
				dio_write_channel(Dio_Channel_A5,STD_low);
				_delay_ms(100);
			}
			//********************************************************************************************************
			if (counter == 6)
			{
				_delay_ms(30);
				dio_write_channel(Dio_Channel_A6,STD_high);
				_delay_ms(100);
			}
			else
			{
				dio_write_channel(Dio_Channel_A6,STD_low);
				_delay_ms(100);
			}
			//********************************************************************************************************
			if (counter == 7)
			{
				_delay_ms(30);
				dio_write_channel(Dio_Channel_A7,STD_high);
				_delay_ms(100);
			}
			else
			{
				dio_write_channel(Dio_Channel_A7,STD_low);
				_delay_ms(100);
			}
		}
    }
}

