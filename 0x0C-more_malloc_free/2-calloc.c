#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using the malloc function.
 *
 * @nmemb: number of elements in array.
 * @size: size of each element in array in bytes.
 * Return: pointer to memory containing array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *buffer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	buffer = malloc(size * nmemb);

	if (buffer == NULL)
		return (NULL);

	return (buffer);

}
