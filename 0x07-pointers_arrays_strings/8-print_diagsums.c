#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two
 *  diagonals of a square matrix of integers.
 *  @a: square matrix.
 *  @size: dimensions of the square-matrix.
 */

void print_diagsums(int *a, int size)
{
	int leading_diag, secondary_diag, x, y;

	leading_diag = 0, secondary_diag = 0;
	for (x = 0; x < size; x++)
	{

		leading_diag += a[x];
		a += size;
	}

	a = a - size;


	for (y = 0; y < size; y++)
	{
		secondary_diag += a[y];
		a -= size;
	}

	printf("%d, %d\n", leading_diag, secondary_diag);

}
