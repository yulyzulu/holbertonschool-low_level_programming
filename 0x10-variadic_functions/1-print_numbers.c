#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_numbers- print numbers
*@separator: char pointer
*@n: const unsigned int
*Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (i != (n - 1))
			{
				printf("%d%s", va_arg(list, unsigned int), separator);
			}
			else
			{
				 printf("%d", va_arg(list, unsigned int));
			}

		}
	}
	va_end(list);
	printf("\n");
}
