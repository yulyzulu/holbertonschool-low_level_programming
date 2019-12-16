#include "lists.h"
/**
*delete_dnodeint_at_index- delete a node at index of a linked list
*@head: dlistint_t double pointer
*@index: unsigned int
*Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1/*, *temp2*/;
	unsigned int i;

	temp1 = *head;
	if (temp1  == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp1);
		(*head)->prev = NULL;
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (temp1->next == NULL)
			return (-1);
	}
/**
*temp1 = temp1->next;
*temp2 = temp1->next;
*temp1->next = temp2->next;
*temp2->next->prev = temp1;
*free(temp2);
*return (1);
*/
return (1);
}
