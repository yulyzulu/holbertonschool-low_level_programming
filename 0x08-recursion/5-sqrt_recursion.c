#include "holberton.h"
/**
*_sqrt_recursion- returns the natural square root of a number
*@n: integer
*Return:square_root
*/
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
/**
*square_root- square root
*@n: integer
*@x: integer
*Return: square_root
*/
int square_root(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
return (square_root(n, x + 1));
}
