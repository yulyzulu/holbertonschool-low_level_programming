#include"holberton.h"
/**
**_strncat- concatenates two strings
*@dest: array
*@src: array
*@n: integer
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	for (j = 0; j < n && src[j] != 0 ; j++, i++)
	{
		dest[i] = src[j];

	}
	dest[i] = 0;

	return (dest);
}
