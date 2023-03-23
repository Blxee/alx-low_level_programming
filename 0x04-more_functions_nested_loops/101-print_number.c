#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */

void print_number(int n)
{
	int max = 10000000000;

	while (max)
	{
		digit = (n / max) % max;
		_putchar('0' + digit);
		max /= 10;
	}
}
