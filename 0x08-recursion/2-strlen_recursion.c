#include "main.h"

/**
 * _strlen_recursion - finds the length of a string.
 * @s: pointer to string to be analysed.
 * Return: length of string s.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
