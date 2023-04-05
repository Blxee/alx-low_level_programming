#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse to stdout
 * @s: the string to print
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
