#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog struct from fields
 *
 * @name: the dog' name
 * @age: the dog's age
 * @owner: the name of the dog's owner
 *
 * Return: a new dog struct from fields
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *name_cp = 0, *owner_cp = 0;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	if (name)
	{
		name_cp = malloc(strlen(name) * sizeof(char) + 1);
		if (!name_cp)
		{
			free(new);
			return (NULL);
		}
	}
	if (owner)
	{
		owner_cp = malloc(strlen(owner) * sizeof(char) + 1);
		if (!owner_cp)
		{
			if (name_cp)
				free(name_cp);
			free(new);
			return (NULL);
		}
	}

	strcpy(name_cp, name);
	strcpy(owner_cp, owner);

	new->name = name_cp;
	new->age = age;
	new->owner = owner_cp;

	return (new);
}
