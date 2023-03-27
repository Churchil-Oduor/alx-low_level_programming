#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 *  including the terminating null byte (\0),
 *   to the buffer pointed to by dest.
 *
 * @dest: pointer acting as a buffer.
 * @src: source pointer.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int count, count_2;

	count, count_2 = 0;

	while (*(src + count) != '\0')
		count++;
	
	while (count_2 != count)
	{
		*(dest + count_2) = *(src + count_2);
		++count_2;
	}

	return (dest);

}
