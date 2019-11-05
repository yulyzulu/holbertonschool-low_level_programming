#include "lists.h"
#include <stdio.h>
/**
*free_listint2- frees a listin_t list
*@head: double pointer
*/
void free_listint2(listint_t **head)
{
	listint_t *la = *head;

	if (head == NULL)
	{
		return;
	}
	while (la != NULL)
	{
		free(la);
		la = la->next;
		*head = la;
	}
	head = NULL;
}
