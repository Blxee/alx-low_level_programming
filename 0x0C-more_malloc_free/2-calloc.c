#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates an array in the heap
 * @nmemb: length of the array
 * @size: size of the datatype
 * Return:
 *	A pointer to the array
 *	NULL if the process wasn't successful
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;
	unsigned int i, j;

	if (!nmemb || !size)
		return (NULL);

	result = malloc(nmemb * size);

	if (!result)
		return (NULL);

	for (i = 0; i < nmemb; i += size)
		for (j = 0; j < size; j++)
			result[i + j] = 0;

	return (result);
}
