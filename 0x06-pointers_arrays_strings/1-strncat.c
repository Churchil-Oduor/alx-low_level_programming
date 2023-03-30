#include "main.h"

/**
 * _strncat - concatenates string src n bytes to des.
 * @des: 1st string passed.
 * @src: 2nd string passed.
 * Return: Returns a pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int count, dest_last_count;

	dest_last_count = 0;
	count = 0;

	while (*(dest + dest_last_count) != '\0')
		dest_last_count++;

	for (count = 0; count < n; count++)
	{
		if (*(src + count) == '\0')
		{
			break;
		}
		else
		{
			*(dest + dest_last_count) = *(src + count);
			dest_last_count++;
		}
	}

	return (dest);
}
