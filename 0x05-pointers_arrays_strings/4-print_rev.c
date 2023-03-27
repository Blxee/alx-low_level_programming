#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - Prints a string of chars in reverse to stdout
 * @s: the address  of the first char of the string
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
