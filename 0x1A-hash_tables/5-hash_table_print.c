#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
*hastable_set- Function that adds an element to the hash table
*
*
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int i;
	hash_table_t *temp1;

	temp1 = ht;
	while (temp1->next)
	{
		temp1->next;
	}

	if (key == NULL)
                return (0);

	for (i = 0; i < temp1; i++)
	{
		printf("/{%s : %s/}", ht[i].value, ht[i].key);
	}
	return (0);
}
