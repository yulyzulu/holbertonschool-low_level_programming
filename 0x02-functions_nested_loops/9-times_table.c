#include "holberton.h"
/**
*times_table- print table
*
*Return: print
*/
void times_table(void)
{
	int a, b, multi, d, e;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
		multi = a * b;
		if (multi <= 9 && b != 0)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + multi);
		}
		else if (b == 0)
		{
		_putchar('0' + multi);
		}
		else
		{
		d = multi / 10;
		e = multi % 10;
		_putchar(',');
		_putchar(' ');
		_putchar('0' + d);
		_putchar('0' + e);
		}
		}
	_putchar('\n');
	}
}
