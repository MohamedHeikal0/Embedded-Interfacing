/*
 * dio_cnfg.c
 *
 * Created: 4/7/2020 3:27:53 PM
 *  Author: Heikal
 */ 
#include "bit_math.h"
#include "dio_cnfg.h"
#include "dio_hw.h"
#include "dio_types.h"

const pin_config_Type pin_config []={
	/*PA0*/		{Output,STD_low},
	/*PA1*/		{Output,STD_low},
	/*PA2*/		{Output,STD_low},
	/*PA3*/		{Output,STD_low},
	/*PA4*/		{Output,STD_low},
	/*PA5*/		{Output,STD_low},
	/*PA6*/	   	{Output,STD_low},
	/*PA7*/		{Output,STD_low},
	/*PB0*/		{Input,STD_high}
	};
	
	void Dio_init(void)
	{
		uint8 counter;
		Dio_PortType port_x ;
		Dio_ChannelType channel_position;
		
		for(counter =Dio_Channel_A0; counter <PINCOUNT ; counter++)
		{
			port_x = counter % 8;
			port_x = counter /8;
			if(pin_config[counter].pin_Direction == Output)
			{
				switch (port_x)
				{
					case Dio_Port_A:
					SET_BIT(DDRA_REG,channel_position);
					break;
					case Dio_Port_B:
					SET_BIT(DDRB_REG,channel_position);
					break;
				}
			}
			else
			{
				switch (port_x)
				{
					case Dio_Port_A:
					CLEAR_BIT(DDRA_REG,channel_position);
					break;
					case Dio_Port_B:
					CLEAR_BIT(DDRB_REG,channel_position);
					break;
				}
			}
		}
	}