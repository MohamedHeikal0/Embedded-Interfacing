/*
 * bit_math.h
 *
 * Created: 4/8/2020 2:29:52 PM
 *  Author: Heikal
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT)			REG|=(1<<BIT)
#define CLEAR_BIT(REG,BIT)		REG&=~(1<<BIT)
#define GET_BIT(REG,BIT)		 ((REG>>BIT)&1)
#define  TOGGLE_BIT(REG,BIT)	REG^=(1<<BIT)


#endif /* BIT_MATH_H_ */