#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: number entered to be converted.
 * Return: returns the binary number.
 */

void print_binary(unsigned long int n)
{
	unsigned int bits, mask;

	bits = sizeof(n) * 2;
	mask = 1u << bits;

	if (n == 0)
	{
		_putchar('0');
		mask = 0;
	}

	while (mask != 0 && (mask & n) == 0)
		mask >>= 1;

	while (mask)
	{
		_putchar((mask & n) ? '1' : '0');
		mask >>= 1;
	}
}
