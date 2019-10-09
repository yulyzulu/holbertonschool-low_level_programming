#include "holberton.h"
#include <stdio.h>
/**
*_puts_recursion- prints a string
*@s: array
*
*/
void _puts_recursion(char *s)
{
	puts(s);
	s++;
	if (s != 0)
	{
	void _puts_recursion(char *s);
	}
}
