#include <stdio.h>
#include "holberton.h"
/**
*print_array- print array
*@a: pointer
*@n: integer
*Return: array
*/
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n ; x++)
	{
		if (x != (n - 1))
		{
			printf("%d, ", a[x]);
		}
		else
		{
			printf("%d", a[x]);
		}
	}
		printf("\n");
}
