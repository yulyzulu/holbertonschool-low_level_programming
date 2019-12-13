#include "lists.h"
/**
*add_dnodeint_end- add a new node at the end of a linked list
*@head: dlistint double pointer
*@n: const integer
*Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *aux;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		aux = *head;
		while (aux->next)
			aux = aux->next;
		new_node->next = NULL;
		new_node->prev = aux;
		aux->next = new_node;
	}
return (new_node);
}
