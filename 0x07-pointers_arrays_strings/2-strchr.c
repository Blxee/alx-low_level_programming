#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: the string to search
 * @c: the character to search for
 * Return:
 *  A pointed to char if found
 *  NULL elsewise
 */

char *_strchr(char *s, char c)
{
	for (; *s; s++)
		if (*s == c)
			return (s);
	return (NULL);
}
