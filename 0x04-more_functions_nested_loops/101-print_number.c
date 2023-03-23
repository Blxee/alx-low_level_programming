#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */

void print_number(int n)
{
	int max = 1000000000, printing = 0, digit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		_putchar(45);
		n = -n;
	}

	while (max)
	{
		digit = n / max % 10;
		if (digit > 0)
			printing = 1;
		if (printing)
			_putchar('0' + digit);
		max /= 10;
	}
}
