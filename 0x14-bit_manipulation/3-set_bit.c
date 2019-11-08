#include "holberton.h"
/**
*set_bit- sets the value a bit to 1 at a given index
*@n: pointer to unsigned long int
*@index: unsigned int
*Return: 1 if it worked, -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		(*n = 1 << index | *n);
			return (1);
	}
	return (-1);
}
