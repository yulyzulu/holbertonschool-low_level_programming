#include "holberton.h"
/**
*jack_bauer- print digits numbers
*
*Return: numbers
*/
void jack_bauer(void)
{
	int w, x, y, z, num = 9;

	for (w = 0; w <= 2; w++)
	{
	if (w == 2)
	num = 3;
	else
	num = 9;
		for (x = 0; x <= num; x++)
		{
			for (y = 0; y <= 5; y++)
			{
				for (z = 0; z <= 9; z++)
				{
				_putchar(w + '0');
				_putchar(x + '0');
				_putchar(':');
				_putchar(y + '0');
				_putchar(z + '0');
				_putchar('\n');
				}
				z = 0;
				}
				y = 0;
				}
				x = 0;
				}
}
