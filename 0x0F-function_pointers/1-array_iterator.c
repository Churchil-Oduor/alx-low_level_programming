#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 *
 * @array: array to be worked on by function pointer -> action.
 * @size: size of the array.
 * @action: function pointer passed as a parameter to function
 * array_iterator.
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int index;

	for (index = 0; index < size; index++)
		action(array[index]);
}
