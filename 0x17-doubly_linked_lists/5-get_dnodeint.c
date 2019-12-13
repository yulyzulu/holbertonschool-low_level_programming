#include "lists.h"
/**
*get_dnodeint_at_index- function that return the nth of a linked list
*@head: dlistint_t pointer
*@index: unsigned int
*Return: value index or NULL if the node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	node = head;

	if (head == NULL)
		return (NULL);
	if (node->next != NULL)
	{
		for (i = 0; i < index; i++)
		{
			node = node->next;
		}
		return (node);
	}
return (NULL);
}
