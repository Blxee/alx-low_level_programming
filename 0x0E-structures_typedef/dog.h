#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - represents a dog object
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the name of the dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* !_DOG_H_ */
