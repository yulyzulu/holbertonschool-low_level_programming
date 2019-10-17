#include "holberton.h"
#include <stdlib.h>
/**
*array_range- creates an array of integers
*@min: integer
*@max: integer
*Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int i, x;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	x = max - min + 1;

	p = malloc(x * (sizeof(int)));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < x; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
