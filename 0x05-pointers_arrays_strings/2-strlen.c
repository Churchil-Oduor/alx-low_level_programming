#include "main.h"

/**
 * _strlen - checks the length of a string.
 * @s: String to be checked.
 * Return: Returns length of String.
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*(s + count) != '\0')
		++count;

	return (count);
}
