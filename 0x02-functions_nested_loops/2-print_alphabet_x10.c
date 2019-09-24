#include "holberton.h"
/**
*print_alphabet_x10- Print alphabet 10 .
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	char y;
	int x;

	x = 0;
	while (x <= 9)
	{
	for (y = 97 ; y <= 122 ; y++)
	{
	_putchar(y);
	}
	x++;
	_putchar(10);
	}
}

