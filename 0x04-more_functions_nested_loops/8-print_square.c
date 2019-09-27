#include "holberton.h"
/**
*print_square- print square
*@size: integer
*Return: square
*/
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (size > 0)
				{
				_putchar(35);
				}
				else
				{
				_putchar('\n');
				}
			}
			_putchar('\n');
		}
	}
}

