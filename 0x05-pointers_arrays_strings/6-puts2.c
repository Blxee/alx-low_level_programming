#include "main.h"

/**
 * puts2 - Prints every other char of a string followed by a new line
 * @str: the address of the first char of the string
 */

void puts2(char *str)
{
	int i, len;

	for (i = 0, len = _strlen(str); i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
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
