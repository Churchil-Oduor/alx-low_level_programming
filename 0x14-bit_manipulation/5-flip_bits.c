#include "main.h"

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 *
 * @n: first number.
 * @m: second number.
 * Return: number of bits to be flipped.
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits, xor_res, mask;

	bits = 0;
	mask = 1u << (bits - 1);

	/** doing an EXOR**/
	xor_res = n ^ m;
	while (mask)
	{
		if (xor_res & mask)
			bits++;
		mask >>= 1;
	}

	return (bits);


}
