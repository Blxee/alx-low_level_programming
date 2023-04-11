#include "main.h"
#include <string.h>

/**
 * _strdup - Duplicates a string
 * @str: the original string
 * Return:
 *	A pointer to the string if it was successful
 *	NULL elsewise
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int size, i;

	if (!str)
		return (NULL);

	size = strlen(str);
	p = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		p[i] = str[i];
	p[i] = '\0';

	return (p);
}
