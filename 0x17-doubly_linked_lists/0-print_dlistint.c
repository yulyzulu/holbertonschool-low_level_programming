#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_dlistint- print all elements of a linked list
*@h: dlistint_t pointer
*Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
return (i);
}
