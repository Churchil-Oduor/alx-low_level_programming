#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - gives the index of a key.
 *
 * @key: the key to be hashed using the hash function.
 * @size: the size of the hash hash table.
 * Return: index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
