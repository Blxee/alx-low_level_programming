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
	void *result;

	if (!nmemb || !size)
		return (NULL);

	result = malloc(nmemb * size);

	if (!result)
		return (NULL);

	return (result);
}
