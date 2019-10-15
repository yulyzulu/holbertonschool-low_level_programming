#include"holberton.h"
#include <stdlib.h>
/**
*create_array- create an array of chars
*@size: unsigned int
*@c: char
*Return: char
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
return (p);
}
