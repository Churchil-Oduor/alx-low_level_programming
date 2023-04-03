#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 *
 * @dest: destination buffer where n bytes are to copied
 * from src.
 * @src: source where n bytes are to be copied from.
 * @n: number of bytes to be copied from src to dest.
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0;  index < n; index++)
		dest[index] = src[index];
	return (dest);
}
