#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
*add_node- adds a nwe node ad the beginning of a list_t list
*@head: double pointer
*@str: puntero
*Return: address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	while (str[i] != '\0')
	{
		i++;
	}
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
