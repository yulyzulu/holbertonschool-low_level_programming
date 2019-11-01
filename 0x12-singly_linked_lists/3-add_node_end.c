#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
*add_node_end- adds a new node at the end of a list_t list
*@head: double pointer
*@str: string pointers
*Return: addres of the new element or NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node1;
	list_t *last = *head;
	int i = 0;

	new_node1 = malloc(sizeof(list_t));

	if (new_node1 == NULL)
	{
		return (NULL);
	}
	new_node1->str = strdup(str);

	while (str[i])
	{
		i++;
	}
	new_node1->len = i;
	new_node1->next = NULL;

	if (*head == NULL)
	{
		*head = new_node1;
	}

	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node1;
	}
	return (new_node1);
}
