#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
*hastable_set- Function that adds an element to the hash table
*
*
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
 		if (ht->array[i] != NULL)
        	{
			printf("'%s' : '%s'", ht->array[i]->key, ht->array[i]->value);
		/*	if(ht->array[i]->next != NULL && ht->array[i]->key)
				printf(", ");*/
		}
		
	}
	printf("}\n");
}
