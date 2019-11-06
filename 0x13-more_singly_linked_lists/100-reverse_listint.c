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
	listint_t *Curr = *head;
	listint_t *Next = NULL;

	while (Curr != NULL)
	{
		Next = Curr->next;
		Curr->next = Prev;
		Prev = Curr;
		Curr = Next;
	}
	*head = Prev;
	return (*head);
}
