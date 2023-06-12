#include "main.h"
#include <stdlib.h>

char **splitter(char **buffer, char *str);
/**
 * strtow - splits a string into two words.
 * @str: string to be split.
 * Return: pointer to array of strings.
 */
char **strtow(char *str)
{
	char **buffer, **memory;
	int index, check_space, row, count;

	count = 0;
	check_space = 0;
	buffer = malloc(sizeof(**buffer) * 2);
	if (buffer == NULL)
		return (NULL);

	for (row = 0; row < 2; row++)
	{
		for (index = 0; str[index] != '\0'; index++)
		{
			if (*(str + index) == ' ' && check_space == 0)
			{
				count++;
				check_space = 1;
			}
			else if (*(str + index) != ' ' && check_space == 1)
			{
				check_space = 0;
				count++;
			}
		}

		buffer[row] = malloc(sizeof(*buffer) * count);
		count = 0;

		if (buffer[row] == NULL)
			return (NULL);
	}

	memory = splitter(buffer, str);
	return (memory);
}

/**
 * splitter - receives the string from strtow into two words.
 * @buffer: a 2d array from strtow.
 * @str: string to be split.
 * Return: pointer to buffer.
 */

char **splitter(char **buffer, char *str)
{
	int index, count, row;

	count = row = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (*(str + index) != ' ')
		{
			buffer[row][count++] = str[index];
		}
		else
		{

			buffer[row][count++] = str[index];
			row = 1;
			count = 0;

		}
	}
	buffer[row][count++] = '\0';
	return (buffer);
}
