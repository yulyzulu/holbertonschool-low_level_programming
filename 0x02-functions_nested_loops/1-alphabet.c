#include "holberton.h"
/**
 * function print_alphabet- print the alphabet.
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char x;

	for (x = 97 ; x <= 122 ; x++)
	{
	_putchar(x);
	}
	_putchar(10);
}
