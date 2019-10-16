#include "holberton.h"
#include <stdlib.h>
/**
*alloc_grid- Returns a pointer to a 2 dimensional array of integer
*@width: integer
*@height: integer
*Return: integer pointer
*/
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(height * (sizeof(int *)));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));

			if (p[i] == NULL)
			{
				for (j = i; j >= 0; j--)
				{
					free(p[j]);
				}
				free(p);
			}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			p[k][l] = 0;
		}
	}
return (p);
}
