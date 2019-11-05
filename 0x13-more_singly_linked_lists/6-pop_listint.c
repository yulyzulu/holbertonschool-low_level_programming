#include "lists.h"
#include <stdio.h>
/**
*pop_listint- deletes the head node of a listint_t linked list
*@head: double pointer
*Return: integer
*/
int pop_listint(listint_t **head)
{
	listint_t *x, *y;
	int i;

	if (*head == NULL)
	{
		return (0);
	}

	x = *head;
	y = (*head)->next;
	i = (*head)->n;
	*head = y;

	free(x);
	return (i);

}
