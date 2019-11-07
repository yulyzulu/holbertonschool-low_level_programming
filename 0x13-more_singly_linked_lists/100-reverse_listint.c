#include "lists.h"
#include <stdio.h>
/**
*reverse_listint- function that reverses a linked list
*@head: double pointer
*Return: listint_t
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *Prev = NULL;
	listint_t *Next = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}
	while ((*head)->next != NULL)
	{
		Next = (*head)->next;
		(*head)->next = Prev;
		Prev = *head;
		*head = Next;
	}
	*head = Prev;
	return (*head);
}
