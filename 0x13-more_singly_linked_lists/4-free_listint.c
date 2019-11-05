#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_listint- frees a listint_t list
*@head: pointer
*/
void free_listint(listint_t *head)
{
	listint_t *la;

	while (head != NULL)
	{
		la = head->next;
		free(head);
		head = la;
	}
}
