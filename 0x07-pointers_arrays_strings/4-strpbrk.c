#include "main.h"

/**
 * _strpbrk - locates the first occurence in the string s of any
 * of the bytes in the string accept.
 *
 * @s: string to be scanned.
 * @accept: string to be scanned with.
 * Return: Returns a pointer to the byte in s that matches one of the bytes
 * in accept or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return ('\0');
}
