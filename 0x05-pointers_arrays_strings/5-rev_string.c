#include "holberton.h"
/**
*rev_string- reverse string
*@s: string pointer
*Return: reverse string
*/
void rev_string(char *s)
{
	int i, x, j, y;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	x = (i) / 2;
	for (j = i; j > x ; j--)
	{

		y = s[j];
		s[j] = s[i - j];
		s[i - j] = y;

	}
}
