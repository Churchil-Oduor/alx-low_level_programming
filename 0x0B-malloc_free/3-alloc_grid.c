#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers.
 * @width: number of columns in array.
 * @height: number of rows in array.
 * Return: pointer to memory holding the array.
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int index, x, y;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < height; index++)
	{
		array[index] = malloc(sizeof(int) * width);


		if (array[index] == NULL)
		{
			for (; index >= 0; index--)
			{
				free(array[index]);
			}

			free(array);

			return (NULL);
		}

	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			array[x][y] = 0;
	return (array);
}
