#include "holberton.h"
#include <stdlib.h>
/**
*argstostr- concatenates all the arguments
*@ac: integer
*@av: double pointer
*Return: char
*/
char *argstostr(int ac, char **av)
{
	int i;
	char *p;

	if (ac == 0 || av == NULL)

	{
		return (NULL);
	}
	p = malloc(ac * sizeof(char *));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		p = av[i];
	}
	return (p);
}

