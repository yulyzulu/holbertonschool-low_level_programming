#include "holberton.h"
/**
*flip_bits- return number of bits to flip to get one number to another
*@n: unsigned long int
*@m: unsigned long int
*Return: number of bits to get other number
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int l, cont = 0;

	l = (n ^ m);

	while (l)
	{
		cont = cont + (l & 1);
		l >>= 1;
	}
	return (cont);
}
