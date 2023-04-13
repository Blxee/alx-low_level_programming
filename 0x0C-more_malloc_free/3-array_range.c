#include "main.h"

/**
 * array_range - Creates an array of range of numbers in the heap
 * @min: range start (included)
 * @max: range end (included)
 * Return:
 *	A pointer to the array
 *	NULL if it wasn't successful
 */

int *array_range(int min, int max)
{
	int *result, *i;

	if (min > max)
		return (NULL);

	result = malloc((max - min + 1) * sizeof(*result));

	if (!result)
		return (NULL);

	for (i = result; min <= max; min++, i++)
		*i = min;

	return (result);
}
