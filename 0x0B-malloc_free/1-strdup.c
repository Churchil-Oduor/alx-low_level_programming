#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 *  space in memory, which contains a copy of the
 *  string given as a parameter.
 *  @str: string to be copied.
 *  Return: pointer o which @str has been copied.
 */

char *_strdup(char *str)
{
	char *copy;
	int num_chars, index;

	num_chars = 0;

	if (*str)
	{
		while (*(str + num_chars) != '\0')
			++num_chars;

		num_chars++;
		copy = malloc(sizeof(*copy) * num_chars);

		if (copy != NULL)
		{

			for (index = 0; index < num_chars; index++)
				copy[index] = str[index];

			copy[++index] = '\0';

			return (copy);
		}
	}

	return (NULL);
}
