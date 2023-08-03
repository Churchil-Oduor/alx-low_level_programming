#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: number to be manipulated.
 * @index: index of bit to be turned to 1.
 * Return: 1 if it worked else -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (n != NULL)
	{
		mask = 1u << index;
		*n |= mask;
		return (1);
	}
	else
	{
		return (-1);
	}
}
