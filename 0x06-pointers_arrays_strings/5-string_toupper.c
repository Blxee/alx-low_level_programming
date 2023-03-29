#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: the string to change to uppercase
 * Return: the string pointer
 */

char *string_toupper(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = 'A' + *s - 'a';
		s++;
	}

	return (s);
}
