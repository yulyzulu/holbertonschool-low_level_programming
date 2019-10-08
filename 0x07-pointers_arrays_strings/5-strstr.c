#include "holberton.h"
/**
*
*
*
*/
char *_strstr(char *haystack, char *needle)
{
	int i,j;

	i = 0;
	while (haystack[i] != 0)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != 0 && haystack[j+i] != 0 || needle[j] == haystack[j+i])
			{
				j++;
			}
			if (needle[j] == 0)
			{
				i++;
			}
		}
	}
}
