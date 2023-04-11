#include "main.h"

/**
 * create_array - Allocates an array of chars with a default value
 * @size: size of the array
 * @c: the default value
 * Return:
 *	A pointer to the array if it was successful
 *	NULL elsewise
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (!size)
		return (NULL);

	p = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		p[i] = c;
	p[i] = '\0';

	return (p);
}
