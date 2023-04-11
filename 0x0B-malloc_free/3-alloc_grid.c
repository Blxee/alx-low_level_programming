
#include "main.h"

/**
 * alloc_grid - Allocates an 2 dimentional array
 * @width: the width of the 2d array
 * @height: the height of the 2d array
 * Return:
 *	A pointer to the array if it was successful
 *	NULL elsewise
 */

int **alloc_grid(int width, int height)
{
	int i, j, **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = calloc(width, sizeof(int *));
	if (!p)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		p[i] = calloc(height, sizeof(int));
		if (!p[i])
		{
			for (i -= 1; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < height; j++)
			p[i][j] = 0;
	}

	return (p);
}
