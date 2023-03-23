#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */

void print_number(int n)
{
	int max = 10;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / max)
		max *= 10;

	max /= 10;

	while (max)
	{
		int digit = n / max % 10;

		max /= 10;
		_putchar('0' + digit);
	}
}
