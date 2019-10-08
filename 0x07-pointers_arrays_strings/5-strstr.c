#include "holberton.h"
/**
**_strstr- locates a substring
*@haystack: array
*@needle: array
*Return: pointer or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == 0)
	{
		return (haystack);
	}

	i = 0;
	while (haystack[i] != 0)
	{
		j = 0;
		while (needle[j] != 0)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		j++;
		}

	if (needle[j] == 0)
	{
		return (haystack + i);
	}
	i++;
	}
return (0);
}
