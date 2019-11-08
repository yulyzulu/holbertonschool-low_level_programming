#include "holberton.h"
/**
*clear_bit- sets the value a bit to 0 at a given index
*@n: pointer to unsigned long int
*@index: unsigned int
*Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		(*n = ~1 << index & *n);
		return (1);
	}
	return (-1);
}
