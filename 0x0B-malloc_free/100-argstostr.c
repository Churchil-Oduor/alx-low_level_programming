#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of program.
 * @ac: number of arguments i.e argc.
 * @av: pointer to string array.
 * Return: pointer to memory containing concatenated arguments.
 */

char *argstostr(int ac, char **av)
{
	char *buffer;
	int total_chars, row, colum, index;

	index = 0;
	total_chars = 0;

	for (row = 1; row < ac; row++)
	{
		for (colum = 0; av[row][colum] != '\0'; colum++)
			++total_chars;

		++total_chars;
	}

	buffer = malloc(sizeof(*buffer) * (total_chars + 1));

	if (buffer != NULL)
	{
		for (row = 1; row < ac; row++)
		{
			for (colum = 0; av[row][colum] != '\0'; colum++)
				buffer[index++] = av[row][colum];

			buffer[index++] = '\n';
		}

		buffer[total_chars + 1] = '\0';
		return (buffer);
	}

	return (NULL);

}
