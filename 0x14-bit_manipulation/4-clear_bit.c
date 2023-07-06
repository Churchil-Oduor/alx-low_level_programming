#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to a value to be manipulated.
 * @index: index of bit in @n to be manipulated.
 * Return: 1 if successful else -1.
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x, mask;

	if (n != NULL)
	{
		mask = 1u << index;
		x = ~(*n);
		x |= mask;
		*n = ~(x);
		return (1);
	}
	return (-1);


}
