#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: the string to change to uppercase
 * Return: the string pointer
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = 'A' + s[i] - 'a';
		i++;
	}

	return (s);
}
