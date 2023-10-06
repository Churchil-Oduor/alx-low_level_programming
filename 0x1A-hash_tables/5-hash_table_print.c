#include <stdio.h>
#include "hash_tables.h"

void branch(hash_node_t *node);
/**
 * hash_table_print - prints a hash table.
 *
 * @ht: hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, start;

	start = 0;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL && start == 0)
		{
			printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
			branch(ht->array[index]->next);
			start = 1;
		}
		if (ht->array[index] != NULL && start == 1)
		{
			printf(", '%s': '%s'", ht->array[index]->key, ht->array[index]->value);
			branch(ht->array[index]->next);
		}
	}
	printf("}\n");
}

/**
 * branch - prints the linkedlists in similar buckets.
 *
 * @node: a node of the linked list.
 */

void branch(hash_node_t *node)
{
	while (node != NULL)
	{
		printf(", '%s': '%s'", node->key, node->value);
		node = node->next;
	}
}
