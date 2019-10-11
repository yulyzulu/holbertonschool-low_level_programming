#include "holberton.h"
/**
*_strcmp- compares two string
*@s1: array
*@s2: array
*Return: integers
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != 0)
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}

	i++;
	}
	return (0);
}
