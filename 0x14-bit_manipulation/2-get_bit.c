#include "holberton.h"
/**
*get_bit- returns the value of a bit at a given index
*@n: unsigned long int
*@index: unsigned int
*Return: value of the bit at index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (n & (1 << index))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
