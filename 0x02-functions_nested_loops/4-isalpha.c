#include "holberton.h"
/**
*_isalpha- alphabetic character lowercase or uppercase
*@c: _isalpha
*Return: Always 0
*/
int _isalpha(int c)
{
	if ((97 <= c && 122 >= c) || (65 <= c && 90 >= c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
