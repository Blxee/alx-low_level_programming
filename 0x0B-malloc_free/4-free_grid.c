#include "main.h"

/**
 * free_grid - Frees the memory allocated by a 2d array
 * @grid: the 2d array
 * @height: the height of the 2d array
 */

void free_grid(int **grid, int height)
{
	for (height--; height >= 0; height--)
		free(grid[height]);
	free(grid);
}
