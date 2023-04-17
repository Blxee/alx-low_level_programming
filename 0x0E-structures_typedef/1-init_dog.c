#include "dog.h"

/**
 * init_dog - initializes a dog struct
 *
 * @d: a pointer to the struct to be initialized
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the name of the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
