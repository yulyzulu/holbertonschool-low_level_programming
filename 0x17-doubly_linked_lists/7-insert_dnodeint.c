#include "lists.h"
/**
*insert_dnodeint_at_index- function that inserts a new node at a given position
*@h: dlistint double pointer
*@idx: usigned integer
*@n: integer
*Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp1, *temp2;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	
	if (inx == 0)

	


}
