#include "holberton.h"
/**
*print_diagonal- print n diagonal
*@n: integer
*Return: spaces and backslash
*/
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (a > b)
				{
					_putchar(' ');
				}
				else if (a == b)
				{
					_putchar(92);
				}
				else
				{
				}
			}
			_putchar('\n');
		}
	}
}
