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

	while (str[i] != 0)
	{
		i++;
	}
	i++;
	if (str == NULL)
	{
		return (NULL);
	}
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
