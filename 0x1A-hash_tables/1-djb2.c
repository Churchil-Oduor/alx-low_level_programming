#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_djb2 - creates hashes with a good
 * distribution.
 * @str: string to be hashed.
 * Return: unsigned long int number representing the
 * hash function.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c*/
	}
	return (hash);
}
