#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory to be allocated.
 * Return: pointer to memory location.
 */

void *malloc_checked(unsigned int b)
{
	void *buffer;

	buffer = malloc(b);

	if (buffer == NULL)
		exit(98);

	return (buffer);
}
