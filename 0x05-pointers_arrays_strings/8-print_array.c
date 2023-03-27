#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n-elements of array.
 * @n: number of elements to be printed.
 * @a: array passed.
 * Return: void function.
 */

void print_array(int *a, int n)
{
	int count;

	count = 0;
	if (n > 0)
		printf("%d,", *(a + count));
	count++;
	while (count != n && n > 0)
	{
		if (count == (n - 1))
			printf(" %d", *(a + count));
		else
			printf(" %d,", *(a + count));
		++count;
	}

	printf("\n");
}
