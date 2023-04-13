#include "main.h"

/**
 * malloc_checked - Allocates memory in the heap
 * @b: amount of memory to allocate (in bytes)
 * Return: A pointer to the alllcated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	return (p);
}
