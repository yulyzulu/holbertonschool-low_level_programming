#include "holberton.h"
/**
*print_triangle - print triangle
*@size: integer
*
*/
void print_triangle(int size)
{
	int a, b;		
	
	for (a = size; a <= size; a++)
	{
		for (b = 0; b <= size; b++)	
		{
			if (a > b)
			{

				_putchar(' ');
			}
			else if (a == b)
			{
				_putchar(35);
			}
			else
			{
			}
		}
	}
		
		_putchar('\n');
}

