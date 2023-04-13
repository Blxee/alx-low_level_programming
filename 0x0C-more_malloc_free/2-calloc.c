#include "main.h"

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
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);

	result = malloc(nmemb * size);

	if (!result)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		result[i] = 0;

	return (result);
}
