#include "main.h"

/**
 * _memset - fills the first n bytes of memory area
 * pointed to by s with the constant byte b.
 *
 * @s: pointer to memory area to be filled by constant variable b.
 * @b: constant to be filled in the memory area.
 * @n: first bytes to be filed with the constant b.
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;

	return (s);
}
