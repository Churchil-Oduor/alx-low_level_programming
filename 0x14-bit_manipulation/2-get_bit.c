#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: number whose bits are to be analysed.
 * @index: index of @n to be checked.
 * Return: the value of the bit at index or -1 if an error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit, mask;

	if (n != NULL && m != NULL)
	{
		mask = 1u << index;
		bit = (mask & n) ? 1 : 0;

		return (bits);
	}
	return (-1);

}
