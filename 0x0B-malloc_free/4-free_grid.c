#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid that was created by alloc_grid.
 *
 * @grid: pointer to our 2D grid memory created by alloc_grid.
 * @height: number of rows of memory
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
		free(grid[row]);

	free(grid);
}
