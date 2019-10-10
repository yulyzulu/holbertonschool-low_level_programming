#include "holberton.h"
/**
*is_prime_number- function that return prime number
*@n: integer
*Return: integer prime
*/
int is_prime_number(int n)
{
	return (primenumb(n, 2));
}
/**
*primenumb- print prime number
*@n: integer
*@x: integer
*Return: prime number
*/
int primenumb(int n, int x)
{
	if (n <= 1)
	{
		return (0);
	}
	if (x < n && (n % x == 0))
	{
		return (0);
	}
	if (x == n)
	{
		return (1);
	}
return (primenumb(n, x + 1));
}
