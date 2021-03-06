#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_strings- print strings
*@separator: char pointer
*@n: const unsigned int
*Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *p;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(list, char *);

		if (separator == NULL)
		{
			printf("%s", p);
		}

		if (p == NULL)
		{
			p = "(nill)";
		}

		if (separator != NULL)
		{
			printf("%s", p);

			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(list);
}
