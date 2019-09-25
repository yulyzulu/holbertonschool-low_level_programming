#include "holberton.h"
#include <stdio.h>
/**
*print_to_98- print to 98
*@n: integer
*Return: numbers
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98 ; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (; n >= 98 ; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
	}
	printf("\n");

}
