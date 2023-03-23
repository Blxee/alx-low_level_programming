#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */

void print_number(int n)
{
	int printing = 0, digit;

	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (max)
	{
		digit = n / 1000000000 % 10;
		if (digit > 0)
			printing = 1;
		if (printing)
			_putchar('0' + digit);
		max /= 10;
	}
}
