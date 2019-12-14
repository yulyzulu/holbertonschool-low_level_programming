#include "lists.h"
/**
*sum_dlistint- function that return the sum of all the data of a linked list
*@head: dlistint pointer
*Return: the sum of all the data of linked list or 0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *nodes;

	nodes = head;
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (nodes && nodes->next)
		{
			nodes = nodes->next;
			sum = sum + nodes->n;
		}
	return (sum);
	}
}
