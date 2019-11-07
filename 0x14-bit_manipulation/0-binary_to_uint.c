#include "holberton.h"
#include <stdlib.h>
/**
*binary_to_uint- converts a binary to an unsigned int
*@b: pointer string char
*Return: convered number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0, l = 0;
	unsigned int count;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
	i++;
	}
	count = 0;
	for (l = 0; b[l] != '\0'; l++)
	{
		count <<= 1;
		if (b[l] == '1')
		{
			count = count + 1;
		}
	}
	return (count);
}
