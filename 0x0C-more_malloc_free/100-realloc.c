#include "main.h"

/**
 * _realloc - Reallocates memory in the heap with new size
 * @ptr: a pointer to reallocate
 * @old_size: old memory size
 * @new_size: new memory size
 * Return:
 *	A pointer to the new memory
 *	NULL if it was unsuccessful
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_p, *new_p;
	unsigned int size, i;

	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
		return (malloc(new_size));

	new_p = malloc(new_size);
	if (!new_p)
		return (NULL);
	old_p = ptr;

	size = new_size <= old_size ? new_size : old_size;
	for (i = 0; i < size; i++)
		new_p[i] = old_p[i];
	free(ptr);

	return (new_p);
}
