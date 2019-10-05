#include "holberton.h"
/**
**leet- change words to numbers
*@str: array
*Return: string with numbers
*/
char *leet(char *str)
{

	int i, j;
	char letters[] = {"'a','A','e','E','o','O','t','T','l','L'"};
	char numbers[] = {"'4','4','3','3','0','0','7','7','1','1'"};

	i = 0;
	while (str[i] != 0)
	{
		j = 0;
		while (letters[j] != 0)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];

			}
		j++;
		}
	i++;
	}
	return (str);
}
