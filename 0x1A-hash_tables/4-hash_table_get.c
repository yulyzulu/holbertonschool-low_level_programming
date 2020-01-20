#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
*hash_table_get- Function that retrieves a value associated with a key
*@ht: hash table
*@key: key of a hash table
*Return: value of a hash table
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp1;
	unsigned long int hash, index = 0;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return (0);
	if (key == NULL || strlen(key) == 0)
	{
		return (0);
	}
	else
	{
		hash = hash_djb2((const unsigned char *)key);
		index = hash %  ht->size;
	}

	temp1 = ht->array[index];
	while (temp1)
	{
		if (strcmp(temp1->key, key) == 0)
		{
			return (temp1->value);
		}
	temp1 = temp1->next;
	}
	return (NULL);
}
