/*
 * LCD.c
 *
 * Created: 4/17/2020 9:30:55 PM
 *  Author: Heikal
 */ 

#include "LCD.h"

void LCD_Init (void)  
{
	LCD_Dir = 0xF0;		/* Make LCD port direction as o/p */
	LCD_Dir_Control=0x0F; /* Make LCD port direction as o/p */
	LCD_Port_Control &= ~(1<<2);
	_delay_ms(20);		/* LCD Power ON delay always >15ms */
	
	LCD_Command(0x33);
	LCD_Command(0x32);	/* Send for 4 bit initialization of LCD  */
	LCD_Command(0x28);	/* 2 line, 5*7 matrix in 4-bit mode */
	LCD_Command(0x0c);	/* Display on cursor off */
	LCD_Command(0x06);	/* Increment cursor (shift cursor to right) */
	LCD_Command(0x01);	/* Clear display screen */
}

void LCD_Command( unsigned char cmnd )
{
	LCD_Port = (LCD_Port & 0x0F) | (cmnd & 0xF0);/* Sending upper nibble */
	LCD_Port_Control &= ~ (1<<RS);		/* RS=0, command reg. */
	LCD_Port_Control |= (1<<EN);		/* Enable pulse */
	_delay_us(10);
	LCD_Port_Control &= ~ (1<<EN);
	_delay_us(200);
	LCD_Port = (LCD_Port & 0x0F) | (cmnd << 4);/* Sending lower nibble */
	LCD_Port_Control |= (1<<EN);
	_delay_us(1);
	LCD_Port_Control &= ~ (1<<EN);
	_delay_ms(2);
}

void LCD_Char( unsigned char data )
{
	LCD_Port = (LCD_Port & 0x0F) | (data & 0xF0);/* Sending upper nibble */
	LCD_Port_Control |= (1<<RS);  /* RS=1, data reg. */
	LCD_Port_Control|= (1<<EN);
	_delay_us(10);
	LCD_Port_Control &= ~ (1<<EN);
	_delay_us(200);
	LCD_Port = (LCD_Port & 0x0F) | (data << 4);  /* Sending lower nibble */
	LCD_Port_Control |= (1<<EN);
	_delay_us(2);
	LCD_Port_Control &= ~ (1<<EN);
	_delay_ms(2);
}

void LCD_String (char *str)		/* Send string to LCD function */
{
	int i;
	for(i=0;str[i]!=0;i++)		/* Send each char of string till the NULL */
	{
		LCD_Char (str[i]);
	}
}

void LCD_Clear()
{
	LCD_Command (0x01);		/* Clear display */
	_delay_ms(2);
	LCD_Command (0x80);		/* Cursor at home position */
}