#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 *
 * @d - pointer to memory dog to be freed.
 *
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
