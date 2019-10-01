#include"holberton.h"
/**
*_strlen- count characters
*@s: pointer of variable s
*Return: the length of a string
*/
int _strlen(char *s)
{
	int i;

	while (*s != 0)
	{
		s++;
		i++;
	}

	return (i);
}
