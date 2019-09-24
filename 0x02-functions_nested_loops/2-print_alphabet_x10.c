#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void) /* print alphabet*/
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

