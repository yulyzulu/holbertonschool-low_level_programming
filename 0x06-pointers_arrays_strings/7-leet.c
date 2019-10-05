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
		for (j = 0; j <= i && letters[j] != 0; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
				str[0] = numbers[j];
				str[3] = numbers[j];
				str[5] = numbers[j];
			}
		}
		i++;
	}

return (str);
}
