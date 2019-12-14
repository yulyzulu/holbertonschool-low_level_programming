#include "lists.h"
/**
*delete_dnodeint_at_index- delete a node at index of a linked list
*@head: dlistint_t double pointer
*@index: unsigned int
*Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	int nodes;
	delistint_t *temp1, *temp2;
	temp1 = *head;
	temp2 = *head;

	if (temp1  == NULL && temp2 == NULL)
		return (-1);
	
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp1);
		return (1);
	}
}
