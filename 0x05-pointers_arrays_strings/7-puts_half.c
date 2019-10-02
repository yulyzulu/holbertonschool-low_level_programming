#include "holberton.h"
/**
*puts_half- puts half numbers
*@str: string
*Return: half numbers
*/
void puts_half(char *str)
{

	int i, j;

	while (str[i] != 0)
	{
		i++;
	}

	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i / 2) + 1;
	}
	for (; j < i; j++)
	{

		_putchar(str[j]);

	}
	_putchar('\n');
}
