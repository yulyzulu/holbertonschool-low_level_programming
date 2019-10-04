#include "holberton.h"
/**
*reverse_array- reverses the content of an array of integers
*@a: array
*@n: integer
*Return: reverse array
*/
void reverse_array(int *a, int n)
{

	int x, y, z;

	while (a[n] != 0)
	{
		n++;
	}

	n = n - 2;
	x = n / 2;
	for (y = n; y > x ; y--)
	{
		z = a[y];
		a[y] = a[n - y];
		a[n - y] = z;
	}


}


