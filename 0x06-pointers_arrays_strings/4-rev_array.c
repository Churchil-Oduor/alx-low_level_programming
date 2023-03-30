#include "main.h"

/**
 * reverse_array - reverses an array.
 * @a: array to be reversed.
 * @n: number of items in the array.
 * Return: void function.
 */
void reverse_array(int *a, int n)
{
	int count, temp, x, y, index_to_swap;

	for (count = 0; count < n; count++)
	{

		if (count == (n / 2))
			break;
		index_to_swap = n - count - 1;
		x = *(a + count);
		y = *(a + index_to_swap);
		temp = x;
		x = y;
		y = temp;
		*(a + count) = x;
		*(a + index_to_swap) = y;


	}
}
