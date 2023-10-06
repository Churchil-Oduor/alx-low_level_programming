#include <stdlib.h>
#include "hash_tables.h"


/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: hash table.
 * @key: key to be hashed.
 * @value: value associated with a key.
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *buffer;
	unsigned long int index;
	int SUCCESS, FAILURE;

	SUCCESS = 1;
	FAILURE = 0;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (FAILURE);

	index = key_index((const unsigned char *)key, ht->size);
	node->key = (char *)key;
	node->value = (char *)value;
	node->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (SUCCESS);
	}

	buffer = ht->array[index];
	while (buffer->next != NULL)
		buffer = buffer->next;
	buffer->next = node;
	return (SUCCESS);
}
