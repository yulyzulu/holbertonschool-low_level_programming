#include "holberton.h"
/**
**_strpbrk- searches a string for any of a set of bytes
*@s: array
*@accept: array
*Return: a pointer to the byte in s
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != 0)
	{
		j = 0;
		while (accept[j] != 0)
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
		j++;
		}
	i++;

	}

return (0);

}
