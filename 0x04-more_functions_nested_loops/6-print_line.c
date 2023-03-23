#include "main.h"

/**
 * print_line - Draws a straight line in the terminal using underscores
 * @n: The length of the line
 */

void print_line(int n)
{
	if (n > 0)
		while (n--)
			_putchar('_');
	_putchar('\n');
}
