#include "main.h"

/**
 * free_grid - Frees the memory allocated by a 2d array
 * @grid: the 2d array
 * @height: the height of the 2d array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
}
