/*
 * dio_cnfg.h
 *
 * Created: 4/7/2020 3:25:25 PM
 *  Author: Heikal
 */ 


#ifndef DIO_CNFG_H_
#define DIO_CNFG_H_
#include "dio_types.h"
#include "STD_Types.h"
#define PINCOUNT   32
typedef struct{
	Dio_DirType pin_Direction;
	STD_levelType pin_State;
}pin_config_Type;
extern const pin_config_Type pin_config [];


void Dio_init(void);



#endif /* DIO_CNFG_H_ */