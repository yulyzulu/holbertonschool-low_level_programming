#include "lists.h"
#include <stdio.h>
/**
*get_nodeint_at_index- returns the nth node of a listin_t linked list
*@head: pointer
*@index: unsigned int
*Return: listint_t
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
	head = head->next;
	}
	return (head);
}
