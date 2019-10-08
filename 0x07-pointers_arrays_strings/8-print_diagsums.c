#include "holberton.h"
/**
*print_diagsums- prints the sum ot the two diagonals
*@a: array
*@size: integer
*Return: sums of diagonals
*/
void print_diagsums(int *a, int size)
{
	int i, j;
	int *sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum = sum + a[i][j];
			}
			else if (i + j == size - 1)
			{
				sum = sum + a[i][j];
			}
		}
	}

return (sum);
}
