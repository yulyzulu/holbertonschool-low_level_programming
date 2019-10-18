#include "holberton.h"
#include <stdlib.h>
/**
*_realloc- reallocates a memory block
*@ptr: pointer
*@old_size: unsigned int
*@new_size: unsigned int
*Return: new pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);

	if (p == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
        {
                return (malloc(new_size));
        }
	for (i = 0; i < new_size && i < old_size; i++)
	{
		p[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (p);
}
