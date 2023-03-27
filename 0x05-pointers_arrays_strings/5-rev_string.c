#include "main.h"

/**
 * rev_string - Reverses a string of chars
 * @s: the address of the first char of the string
 */

void rev_string(char *s)
{
	int i, len;

	for (i = 0, len = _strlen(s); i < len; i++)
		s[i] = s[len - i - 1];
}

/**
 * _strlen - Determine the length of a string
 * @s: the address of the first character of a string
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
