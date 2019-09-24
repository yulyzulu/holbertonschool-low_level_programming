#include "holberton.h"
/**
*_abs- print integer
*@c: integer
*Return: Always 0
*/
int _abs(int c)
{
	int x;

	if (c >= 0)
	{
	x = c;
	}
	else
	{
	x = -(c);
	}
	return (x);
}
