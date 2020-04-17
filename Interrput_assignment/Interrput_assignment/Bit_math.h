/*
 * Bit_math.h
 *
 * Created: 4/3/2020 12:48:06 PM
 *  Author: Heikal
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

# define SET_BIT(REG,BIT)			REG |= (1<<BIT)
# define CLEAR_BIT(REG,BIT)		REG &= ~(1<<BIT)
# define GET_BIT(REG,BIT)		 ((REG>>BIT)&1)
 




#endif /* BIT_MATH_H_ */