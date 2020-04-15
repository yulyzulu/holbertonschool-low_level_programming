#include "search_algos.h"
#include <stdio.h>
/**
*linear_search - Function that searches for a value in an array of integers
*@array: Pointer to the first element o the array to search in
*@size: The number of elements in array
*@value: The value to search for
*Return: Value if it is present, if value isn ot present return -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] == value)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				return (i);
			}
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
