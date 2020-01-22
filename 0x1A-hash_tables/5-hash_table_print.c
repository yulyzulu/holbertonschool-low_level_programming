#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
*hash_table_print - print a hash table
*@ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	int a = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (a == 1)
				printf(",");

			printf("'%s' : '%s'", ht->array[i]->key, ht->array[i]->value);
			a = 1;
		}
	}
	printf("}\n");
}
