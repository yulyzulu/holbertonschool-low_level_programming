#include "lists.h"
/**
*insert_dnodeint_at_index- function that inserts a new node at a given position
*@h: dlistint double pointer
*@idx: usigned integer
*@n: integer
*Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp1, *temp2;
	unsigned int i;

	temp1 = *h;
	temp2 = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		new_node->prev = NULL;
		*h = new_node;

	}
	for (i = 0; i < (idx - 1) && temp1->next; i++)
	{
		temp1 = temp1->next;
		temp2 = temp1->next->next;
	}
	temp1->next = new_node;
	new_node = temp2;
	temp2->prev = new_node;
	new_node->prev = temp1;
	return (new_node);

return (NULL);
}
