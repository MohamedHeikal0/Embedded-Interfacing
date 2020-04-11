/*
 * dio_types.h
 *
 * Created: 4/6/2020 2:30:07 PM
 *  Author: Heikal
 */ 


#ifndef DIO_TYPES_H_
#define DIO_TYPES_H_

typedef enum
{
	Dio_Channel_A0 = 0,
	Dio_Channel_A1,
	Dio_Channel_A2,
	Dio_Channel_A3,
	Dio_Channel_A4,
	Dio_Channel_A5,
	Dio_Channel_A6,
	Dio_Channel_A7,

	Dio_Channel_B0,
	Dio_Channel_B1,
	Dio_Channel_B2,
	Dio_Channel_B3,
	Dio_Channel_B4,
	Dio_Channel_B5,
	Dio_Channel_B6,
	Dio_Channel_B7
}Dio_ChannelType;

typedef enum
{
	Dio_Port_A = 0,
	Dio_Port_B
}Dio_PortType;

typedef enum
{
	Input = 0,
	Output
}Dio_DirType;





#endif /* DIO_TYPES_H_ */