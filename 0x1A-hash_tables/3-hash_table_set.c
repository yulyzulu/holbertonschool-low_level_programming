#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
*hash_table_set- Function that adds an element to the hash table
*
*
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int len, i, hash;
	hash_table_t *temp1;

	temp1 = ht;
	while (temp1->next)
	{
		temp1->next;
	}

	if (key == NULL)
                return (0);
	else
	{

        	hash = hash_djb2(key);
		index = hash %  temp1;
	}
	for (i = 0; i < temp1; i++)
	{
		if (i == index)
		{
			/*Index tiene algo agregar nuevo nodo*/
			ht[i].value = strdup(value);
			return (1);
		}
		else
			return (0);
	}
}
