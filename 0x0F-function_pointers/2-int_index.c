#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array.
 *
 * @array: array to be searched.
 * @size: size of array.
 * @cmp: function pointer passed.
 *
 * Return: index of the first element for which the cmp does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);

		++index;
	}

	return (-1);
}
