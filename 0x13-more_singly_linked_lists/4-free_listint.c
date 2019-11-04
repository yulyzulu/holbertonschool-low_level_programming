#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_listint- frees a listint_t list
*@head: pointer
*/
void free_listint(listint_t *head)
{
	listint_t *last = head;

	while (last != NULL)
	{
		free(last);
		last = last->next;
	}
}
