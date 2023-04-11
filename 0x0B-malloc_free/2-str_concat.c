#include "main.h"
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return:
 *	A pointer to the string if it was successful
 *	NULL elsewise
 */

char *str_concat(char *s1, char *s2)
{
	char *p = malloc(strlen(s1) * strlen(s2) * sizeof(char) + 1);
	unsigned int i = 0;

	for (; *s1; i++, s1++)
		p[i] = *s1;
	for (; *s2; i++, s2++)
		p[i] = *s2;
	p[i] = '\0';

	return (p);
}
