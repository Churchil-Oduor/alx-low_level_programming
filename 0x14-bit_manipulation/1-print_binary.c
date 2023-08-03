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
	unsigned int bits, mask, flag;

	flag = 0;
	bits = sizeof(n) * 8;

	/**the creates a binary number**/
	mask = 1u << (bits - 1);

	if (n == 0)
	{
		_putchar('0');
		mask = 0;
	}

	while (mask)
	{
		if (mask & n)
		{
			_putchar('1');
			flag = 1;
		}
		else if (!(mask & n) && flag == 1)
			_putchar('0');

		mask >>= 1;
	}
}
