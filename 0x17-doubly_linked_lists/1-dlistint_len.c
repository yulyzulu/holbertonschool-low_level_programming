#include "lists.h"
/**
*dlistint_len- list number of elements in a linked list
*@h: dlistint_t pointer
*Return: Number of elements in a linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}

return (i);
}
