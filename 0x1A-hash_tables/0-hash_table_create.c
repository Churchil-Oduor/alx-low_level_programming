#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 *
 * @size: size of the hash table.
 * Return: pointer to hashtable upon successful
 * creation else NULL upon failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index;
	hash_table_t *htable;

	htable = malloc(sizeof(hash_table_t));
	htable->size = size;
	htable->array = malloc(sizeof(hash_table_t) * size);

	if (htable == NULL || htable->array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		htable->array[index] = NULL;

	return (htable);
}
