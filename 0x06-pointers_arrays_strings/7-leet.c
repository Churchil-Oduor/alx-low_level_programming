#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: string to be encoded.
 * Return: pointer to str.
 */

char *leet(char *str) {
	
	int i, j;

	char caps[] = "AEOTL";
	char small[] = "aeotl";
	char num[] = "43071";

	char ch;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			ch = str[j];
			if (ch == small[i] || ch == caps[i])
				*(str + j) = num[i];
		}
	}
	return (str);
}
