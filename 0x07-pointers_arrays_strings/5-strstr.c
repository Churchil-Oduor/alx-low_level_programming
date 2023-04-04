#include "main.h"

/**
 * _strstr - finds the first occurence of the substring needle in the string haystack. 
 * @haystack: pointer to string to be scanned.
 * @needle: substring to be looked for by _strstr.
 * Return: Returns pointer to the beginning of the located
 * substring or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *ref_mem;
	int x, y, check;
	
	check = 0;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		ref_mem = haystack + x;


		for (y = 0; needle[y] != '\0'; y++)
		{
			if (ref_mem[y] != needle[y])
				break;
			else
				check = 1;
		}

		if (check == 1)
			return (ref_mem);
	}

	return ('\0');
}
