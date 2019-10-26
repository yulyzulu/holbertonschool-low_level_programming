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

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			p = va_arg(list, char *);
			if (separator != NULL)
			{
				if (p != NULL)
				{
					if (i < (n - 1))
					{
						printf("%s%c ", p, *separator);
					}
					else
					{
						printf("%s", p);
					}
				}
				else
				{
					printf("(nil)");
				}
			}
			else
			{
				printf("%s", p);
			}
		}

	va_end(list);
	}
	printf("\n");
}
