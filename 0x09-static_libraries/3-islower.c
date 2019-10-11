#include "holberton.h"
/**
*_islower- checks lowercase character
*@c: _islower
*Return: Always 0
*/
int _islower(int c)
{
	if (97 <= c && 122 >= c)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
