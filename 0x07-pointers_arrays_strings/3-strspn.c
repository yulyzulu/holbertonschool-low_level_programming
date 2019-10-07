#include "holberton.h"
/**
*_strspn-gets the length of a prefix substring
*@s: array
*@accept: array
*Return: unsigned integer
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, x = 0;

	while (s[i] != ' ')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
			x++;
			}
		j++;
		}
	i++;
	}
return (x);
}
