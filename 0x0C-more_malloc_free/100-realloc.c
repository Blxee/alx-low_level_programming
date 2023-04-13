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
		int i;

		if (ptr)
			for (i = 0; i < new_size; i++)
				if (i < old_size)
					p[i] = ((char *)ptr)[i];

		ptr = p;
	}

	return (ptr);
}
