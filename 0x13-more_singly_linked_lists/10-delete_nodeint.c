#include "lists.h"
#include <stdio.h>
/**
*delete_nodeint_at_index- deletes the node at index of a listint_t linked list
*@head: double pointer
*@index: unsigned int
*Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux, *aux2;
	unsigned int i;

	aux = *head;
	if (aux == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (aux->next == NULL)
		{
			return (-1);
		}
	aux = aux->next;
	}
	aux2 = aux->next;
	aux->next = aux2->next;
	free(aux2);

	return (1);
}
