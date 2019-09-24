#include "holberton.h"
/**
*print_last_digit- print las digit
*@c: number
*Return: last digit
*/
int print_last_digit(int c)
{
	int x;

	x = c % 10;

	if (c >= 0)
	{
	_putchar (x + '0');
	return (x);
	}
	else
	{
	x = x * (-1);
	_putchar (x + '0');
	return (x);
	}
}
