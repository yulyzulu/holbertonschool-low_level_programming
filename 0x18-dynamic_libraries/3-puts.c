#include "holberton.h"
/**
*_puts- put string
*@str: string
*Return: string
*/
void _puts(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		_putchar(str[j]);
	}
		_putchar('\n');
}
