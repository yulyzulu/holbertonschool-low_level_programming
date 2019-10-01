#include"holberton.h"
/**
*puts2- numbers 2
*@str: string
*Return: numbers
*/
void puts2(char *str)
{
	int i, j;

	while (str[i] != 0)
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (j % 2 == 0)
		{

			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
