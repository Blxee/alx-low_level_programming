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
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size != old_size)
	{
		char *p = malloc(new_size);
		unsigned int size, i;

		if (!p)
			return (NULL);

		size = new_size < old_size ? new_size : old_size;

		if (ptr)
		{
			for (i = 0; i < size; i++)
				p[i] = ((char *)ptr)[i];
			free(ptr);
		}

		ptr = p;
	}

	return (ptr);
}
