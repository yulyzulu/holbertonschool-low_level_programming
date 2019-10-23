#include "function_pointers.h"
/**
*print_name- function that prints a name
*@name: pointer char
*@f: pointer to function
*Return: name
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
