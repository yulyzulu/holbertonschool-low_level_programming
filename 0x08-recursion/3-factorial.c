#include "holberton.h"
/**
*factorial- returns the factorial number
*@n: integer
*Return: factorial number
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
