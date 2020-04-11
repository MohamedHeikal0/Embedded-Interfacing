/*
 * dio.h
 *
 * Created: 4/6/2020 3:23:03 PM
 *  Author: Heikal
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "STD_Types.h"
#include "dio_types.h"
#include "bit_math.h"
#include "dio_hw.h"

void dio_write_channel (Dio_ChannelType channel_id,STD_levelType level);
STD_levelType Dio_read_channel (Dio_ChannelType);





#endif /* DIO_H_ */