#include "holberton.h"
#include <stdio.h>
/**
*print_diagsums- prints the sum ot the two diagonals
*@a: array
*@size: integer
*Return: sums of diagonals
*/
void print_diagsums(int *a, int size)
{
	int i, j, x, y;

	for (i = 0; i < size; i++)
	{
		x = x + a[(size + 1) * i];
	}
		printf("%d, ", x);

	for (j = 0; j < size; j++)
	{
		y = y + a[(size - 1) * (j + 1)];

	}
		printf("%d\n", y);
}
