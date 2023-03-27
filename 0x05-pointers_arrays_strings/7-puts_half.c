#include "main.h"

/**
 * puts_half - Prints second half of a string of chars followed by a new line
 * @str: the address of the first char of the string
 */

void puts_half(char *str)
{
	int i, len, hlen;

	len = _strlen(str);
	hlen = (len + 1) / 2;
	i = len - hlen;

	for (; i < len; i++)
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
