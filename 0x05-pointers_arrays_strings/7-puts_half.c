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
