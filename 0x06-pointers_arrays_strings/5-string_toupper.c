#include "holberton.h"
/**
**string_toupper- changes all lowercase to uppercase
*@s: array
*Return: array
*/
char *string_toupper(char *s)
{
	int a;

	a = 0;
	while (s[a] != 0)
	{
		if (s[a] >= 97 && s[a] <= 122)
		{
			s[a] = s[a] - 32;
		}

		a++;

	}

	return (s);
}
