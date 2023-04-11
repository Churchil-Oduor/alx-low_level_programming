#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initializes it with c.
 * @c: parameter to fill created array memory.
 * @size: size of array.
 * Return: pointer to created array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size > 0)
	{
		array = malloc(sizeof(*array) * size);
		for (index = 0; index < size; index++)
			array[index] = c;
		return (array);
	}
	return (NULL);
}
