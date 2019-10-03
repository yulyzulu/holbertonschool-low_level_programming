#include "holberton.h"
/**
**_strncpy- copies a string
*@dest: array
*@src: array
*@n: integer
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != 0)
	{
		i++;
	}

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
		for (; i < n; i++)
		{
			dest[i] = 0;

		}
		return (dest);
}
