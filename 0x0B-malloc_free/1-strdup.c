#include "holberton.h"
#include <stdlib.h>
/**
*_strdup- copy string
*@str: pointer string
*Return: char pointer
*/
char *_strdup(char *str)
{
	int i = 0, j;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != 0)
	{
		i++;
	}
	i++;
	p = malloc(i * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; p[j] < i; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
