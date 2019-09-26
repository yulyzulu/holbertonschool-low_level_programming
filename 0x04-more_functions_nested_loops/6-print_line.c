#include "holberton.h"
/**
*print_line- print a line
*@n: integer
*Return: lines
*/
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
		}
	}
	_putchar('\n');
}
