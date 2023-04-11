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
	char *p;
	unsigned int len1, len2, i;

	len1 = s1 ? strlen(s1) : 0;
	len2 = s2 ? strlen(s2) : 0;
	p = malloc(len1 * len2 * sizeof(char) + 1);
	i = 0;

	if (!p)
		return (NULL);

	for (; s1 && *s1; i++, s1++)
		p[i] = *s1;
	for (; s2 && *s2; i++, s2++)
		p[i] = *s2;
	p[i] = '\0';

	return (p);
}
