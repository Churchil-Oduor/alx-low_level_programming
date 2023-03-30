#include "main.h"

/**
 * _strncpy - copies n characters from src to dest.
 * @dest: string variable to be copied to.
 * @src: string to copy.
 * @n: length of string src.
 * Return: returns the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		*(dest + count) = *(src + count);
	}
	return (dest);
}
