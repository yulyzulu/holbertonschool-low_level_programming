#include "holberton.h"
/**
**_strchr- locates a character in a string
*@s: array
*@c: char
*Return: a pointer
*/
char *_strchr(char *s, char c)
{	int i;

	i = 0;
	while (s[i] != '0')
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
	i++;
	}

return ('\0');
}
