#include "lists.h"
#include <stdio.h>
/**
*free_listint2- frees a listin_t list
*@head: double pointer
*/
void free_listint2(listint_t **head)
{
	listint_t *la;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		la = (*head)->next;
		free(*head);
		*head = la;
	}
	head = NULL;
}
