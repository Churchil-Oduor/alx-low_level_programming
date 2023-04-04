#include "main.h"

/**
 * _strchr - locates first occurence of a character in a string.
 * @s: pointer to the string to be searched.
 * @c: character to be located in string.
 * Return: a pointer to the first occurence of the character c
 * in the string s , or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i, index;

	index = -1;




	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			index = i;
			break;
		}
	}

	if (index != -1)
		return (s + index);
	else
		return ('\0');
}
