#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all- function that returns the sum of all
*@n: const unsigned int
*Return: the sum
*/
int sum_them_all(const unsigned int n, ...)
{

	va_list valist;
	unsigned int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, const unsigned int);
	}
	va_end(valist);
	return (sum);
}
