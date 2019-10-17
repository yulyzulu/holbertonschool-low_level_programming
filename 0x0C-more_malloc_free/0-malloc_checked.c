#include "holberton.h"
#include <stdlib.h>
/**
*malloc_checked- allocates memory
*@b: unsigned integer
*Return: allocates memory
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
