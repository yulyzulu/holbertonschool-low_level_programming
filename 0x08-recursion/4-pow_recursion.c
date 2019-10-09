#include "holberton.h"
/**
*_pow_recursion- returns the value of x raised to the power o y
*@x: integer
*@y: integer
*Return: value of raised
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
return (_pow_recursion(x, y - 1) * x);
}
