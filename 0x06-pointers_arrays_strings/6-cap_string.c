#include "holberton.h"
/**
**cap_string- capitalizes all words of a string
*@str: array
*Return: capitalizes words of a string
*/
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == 9 || str[i] == '\n' || str[i] == ','
		|| str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?'
		|| str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{'
		|| str[i] == '}')
		{

			if (str[i] == 9)
			{
				str[i] = ' ';
			}

			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;

			}

		}

		++i;
	}

	return (str);
}
