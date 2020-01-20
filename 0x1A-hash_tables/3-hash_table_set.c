#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
*hash_table_set- Function that adds an element to the hash table
*@ht: hash table
*@key: key
*@value: value associated with the key
*Return: 1 if it succeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash, index = 0;
	hash_node_t *temp1, *new_node = NULL;

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
			free(temp1->value);
			temp1->value = strdup(value);
			return (1);
		}
		temp1 = temp1->next;
	}
	new_node = add_node(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
*add_node - adds a new node at the beginning of a linked list
*@key: const char pointer key
*@value: const char pointer value
*Return: new node
*/
hash_node_t *add_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}
