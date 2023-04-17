#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog struct from the heap
 *
 * @d: a pointer to the dog struct
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
