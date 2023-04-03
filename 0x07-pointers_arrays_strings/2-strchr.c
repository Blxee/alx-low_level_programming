#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: the string to search
 * @c: the character to search for
 * Return:
 *  A pointer to char if found
 *  NULL elsewise
 */

char *_strchr(char *s, char c)
{
	char *chr;

	for (chr = s; *chr; chr++)
		if (*chr == c)
			return (chr);
	return (NULL);
}
