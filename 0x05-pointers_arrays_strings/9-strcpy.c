#include "holberton.h"
/**
*_strcpy- copies the string pointed
*@dest: pointer
*@src: pointer
*Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != 0)
	{
		i++;
	}
	j = 0;
	while (j <= i)
	{
		*(dest + j) = *(src + j);
		j++;
	}

	return (dest);
}
