#include"lists.h"
/**
*list_len- return the number of elements in a linked list_t list
*@h: pointer
*Return: number of elements in linked list_t
*/
size_t list_len(const list_t *h)
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
