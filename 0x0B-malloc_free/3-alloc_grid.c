
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
	int i, **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(width * sizeof(int *));
	if (!p)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		p[i] = calloc(height, sizeof(int));
		if (!p[i])
			return (NULL);
	}

	return (p);
}
