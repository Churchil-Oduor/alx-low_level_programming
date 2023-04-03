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
	int index, size, num_chars;

	num_chars = 0;

	while (*(s + num_chars) != '\0')
		num_chars++;


	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			do
			{
				buffer[]
			}
		}

	}
	return (buffer);
}
