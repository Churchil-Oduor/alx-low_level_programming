#include "main.h"

/**
 * len_str - gets the length of a string
 * @str: string fed to function _strlen
 * @Return: length of @str
 */

unsigned int _strlen(const char *str)
{
	unsigned int len;

	len = 0;
	while (str[len] != '\0')
		len++;

	return (len);
}
