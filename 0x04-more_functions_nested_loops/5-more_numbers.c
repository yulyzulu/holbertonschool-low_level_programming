#include "holberton.h"
/**
*more numbers- print more numbers 0 to 14
*
*Return: 10 times numbers
*/
void more_numbers(void)
{
	int a, b, c, d; 

	for (b = 0; b <= 9; b++)
	{
		for (a = 0 ; a <= 14; a++)
		{
	
			if (a > 9)
			{
			c = a / 10;
			_putchar(c + '0');
			}

		d = a % 10;
		_putchar(d + '0');
		
		}

	_putchar('\n');
	}
}
