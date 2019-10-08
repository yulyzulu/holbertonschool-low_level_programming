#include "holberton.h"
/**
**_strstr- locates a substring
*@haystack: array
*@needle: array
*Return: pointer or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i,j;

	i = 0;
	while (haystack[i] != 0)
	{
		j = 0;
		while (needle[j] != 0);
		{
			if (haystack[i] == needle[j])
			{
				haystack += i;
				return (haystack);
			}
			j++;
		}
		i++;
}
return (0);
}
