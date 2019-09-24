#include "holberton.h"
/**
*print_sign- print sign of a number
*@n:print_sing
*Return: Always 0
*/
int print_sign(int n)
{
	int ret; 

	if (n > 0)
	{
	_putchar(43);
	ret = 1;
	}
	else if (n == 0)
	{
	_putchar(48);
	ret = 0;
	}
	else
	{
	_putchar(45);
	ret = -1;
	}
	return (ret);
}
