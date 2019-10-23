#include "function_pointers.h"
#include <stdlib.h>
/**
*
*
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{	
	int i;
	
	action(array[i]);

	for (i = 0; array[i] < size; i++)
	{
		_putchar(i);
	}
}
