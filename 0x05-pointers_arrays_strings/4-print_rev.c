#include "main.h"

/**
 * print_rev - Prints a string of chars in reverse to stdout
 * @s: the address  of the first char of the string
 */

void print_rev(char *s)
{
	if  (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
