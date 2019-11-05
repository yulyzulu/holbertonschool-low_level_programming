#include "lists.h"
#include <stdio.h>
/**
*insert_nodeint_at_index- inserts a new node at a given position
*@head: double pointer
*@idx: unsigned int
*@n: integer
*Return: listint_t
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *aux;
	unsigned int i;

	aux = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	aux = *head;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < idx; i++)
	{
		if (aux == NULL || aux->next == NULL)
		{
			return (NULL);
		}
	aux = aux->next;
	}
	new_node->next = aux->next;
	aux->next = new_node;
	return (new_node);
}
