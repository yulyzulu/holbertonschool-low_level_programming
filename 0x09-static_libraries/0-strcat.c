#include "holberton.h"
/**
**_strcat- concatenate two strings
*@dest: array
*@src: array
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}

	j = 0;
	while (src[j] != 0)
	{
		dest[i] = dest[i] + src[j];
		i++;
		j++;

	}
	return (dest);
}
