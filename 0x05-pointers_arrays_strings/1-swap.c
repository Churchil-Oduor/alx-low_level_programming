#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: 1st pointer value.
 * @b: second pointer value.
 * Return: void function.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
