#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */

void print_number(int n)
{
	int div = 1,
	    temp = n,
	    digit;

	while (temp >= 10)
	{
		div *= 10;
		temp /= 10;
	}

	while (n)
	{
		digit = n / div;
		n %= div;
		div /= 10;
		_putchar('0' + digit);
	}
}
