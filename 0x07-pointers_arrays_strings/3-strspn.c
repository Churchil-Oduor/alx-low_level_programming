#include "main.h"

/**
 * _strspn - gets the length of the prefix substring.
 * @s: pointer to substring to be checked.
 * @accept: string to be compared to.
 * Return: number of bytes of segment of s which consist
 *  of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int res;
	int i, j, check;

	res = 0;

	for (i = 0; i < s[i]; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				res = i;
				check = 1;
			}
		}
		if (check != 1)
			break;
		else
		{
			check = 0;
		}
	}

	if (res > 0)
		res++;

	return (res);
}
