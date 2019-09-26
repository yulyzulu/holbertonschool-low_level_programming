#include "holberton.h"
/**
*_isupper- checks uppercase character
*@c: integer
*
*Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{

	if (65 <= c  && c <= 90)
	{
		return (1);
	
	}	
	else
	{
		return (0);
	}
	
}
