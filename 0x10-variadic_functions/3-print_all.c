#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_all- print anything
*@format: const char * const
*Return: prints all
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *y;
	va_list list;

	va_start(list, format);

	while (format[i] != 0)
	{
		switch (format[i])
		{
			case 'c':
					printf("%c", va_arg(list, int));
					break;
			case 'i':
					printf("%i", va_arg(list, int));
					break;
			case 'f':
					printf("%f", va_arg(list, double));
					break;
			case 's':
					y = va_arg(list, char *);

					if (y == NULL)
					{
						y = "(nil)";
					}
					printf("%s", y);
	};
	i++;
	}
	va_end(list);
	printf("\n");
}
