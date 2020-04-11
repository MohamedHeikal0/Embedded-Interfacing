/*
 * dio.c
 *
 * Created: 4/7/2020 1:55:41 PM
 *  Author: Heikal
 */ 

#include "dio.h"
#include "bit_math.h"
#include "STD_Types.h"

void dio_write_channel (Dio_ChannelType channel_id,STD_levelType level)
{
	Dio_PortType port_x = channel_id/8 ;
	Dio_ChannelType channel_inside_port = channel_id%8;
	
	switch(port_x)
	{
		case Dio_Port_A:
			if (level == STD_high)
			{
				SET_BIT(PORTA_REG , channel_inside_port);
			}
			else
			{
				CLEAR_BIT(PORTA_REG , channel_inside_port);
			}
		break;	
		case Dio_Port_B:
			if (level == STD_high)
			{
				SET_BIT(PORTB_REG, channel_inside_port);
			} 
			else
			{
				CLEAR_BIT(PORTB_REG, channel_inside_port);
			}
		break;	
	}
	
	STD_levelType Dio_read_channel (Dio_ChannelType channel_id)
	{
		Dio_PortType port_x = channel_id/8 ;
		Dio_ChannelType channel_inside_port = channel_id%8;
		STD_levelType LEVEL ;
		
		switch(port_x)
		{
			case Dio_Port_A: 
				LEVEL = GET_BIT(PINA_REG, channel_inside_port);
			break;
			case Dio_Port_B:
				LEVEL = GET_BIT(PINB_REG, channel_inside_port);
			break;		
		} 
		
		return LEVEL;
		
	}
}