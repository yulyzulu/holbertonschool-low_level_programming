#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
*hash_table_delete- Function that deletes a hash table
*@ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free(ht->array[i]->value);
			free(ht->array[i]->key);
			free(ht->array[i]);
			free(ht);
		}
	}
}
