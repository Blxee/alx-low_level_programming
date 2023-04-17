#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - represents a dog object
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the name of the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* !_DOG_H_ */
