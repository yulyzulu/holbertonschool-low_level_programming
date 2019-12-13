#include "lists.h"
/**
*free_dlistint- free a dlistint list
*@head: dlistint pointer
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}

}
