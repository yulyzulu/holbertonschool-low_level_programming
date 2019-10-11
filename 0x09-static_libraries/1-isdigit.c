#include "holberton.h"
/**
*_isdigit- check digit
*@c: integer
*Return: digit 1, 0 otherwise
*/
int _isdigit(int c)
{
	if (48 <= c && 57 >= c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
