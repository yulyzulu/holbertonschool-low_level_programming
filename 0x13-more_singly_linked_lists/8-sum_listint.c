#include "lists.h"
#include <stdio.h>
/**
*sum_listint- returns the sum of all the data(n) of a linked list
*@head: pointer
*Return: integer of a sum
*/
int sum_listint(listint_t *head)
{
	int sum, i;

	i = 0;
	sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
		i++;
	}
	return (sum);
}
