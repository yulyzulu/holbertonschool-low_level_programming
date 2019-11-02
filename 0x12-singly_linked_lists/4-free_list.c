#include "lists.h"
/**
*free_list- free a list_t list
*@head: pointer
*/
void free_list(list_t *head)
{
	list_t *last = head;

	while (last != NULL)
	{
		free(last->str);
		free(last);
		last = last->next;
	}
}
