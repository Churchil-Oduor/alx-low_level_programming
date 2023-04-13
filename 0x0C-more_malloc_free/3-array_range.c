#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum integer value.
 * @max: maximum integer value.
 * Return: pointer to memory with the array.
 */

int *array_range(int min, int max)
{
	int *mem;
	int index;

	if (min > max)
		return (NULL);

	mem = malloc(sizeof(*mem) * (max - min + 1));

	if (mem == NULL)
		return (NULL);

	for (index = min; index < (max + 1); index++)
		mem[index] = index;
	return (mem);
}
