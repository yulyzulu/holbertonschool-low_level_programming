#include "lists.h"
/**
*
*
*
*/
void free_list(list_t *head)
{
	list_t *last = head;

	while (last != NULL)
	{
		free(last->str);
		free(last);

	}
}
