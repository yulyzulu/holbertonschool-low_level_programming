#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
*_strlen- count characters
*@s: pointer of variable s
*Return: the length of a string
*/
int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
/**
*string_nconcat- concatenates two strings
*@s1: array
*@s2: array
*@n: unsigned int
*Return: concatenates two strings
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int leng1, k, l;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	leng1 = _strlen(s1);

	p = malloc((leng1 + n + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	else 
	{
		for (k = 0; s1[k] != '\0'; k++)
		{
			p[k] = s1[k];
		}
		for (l = 0; l < n; l++)
		{
			p[k + l] = s2[l];
		}
	}
	p[k + l] = '\0';
	return (p);
}
