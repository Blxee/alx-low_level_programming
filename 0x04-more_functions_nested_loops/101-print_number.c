#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */

void print_number(int n)
{
	int div = 1,
	    temp,
	    digit,
	    num = n,
	    is_neg = n < 0;

	if (is_neg)
	{
		n = -n;
		num = n;
	}

	temp = n;

	while (temp >= 10)
	{
		div *= 10;
		temp /= 10;
	}

	if (is_neg)
		_putchar('-');

	while (num)
	{
		digit = num / div;
		num %= div;
		div /= 10;
		_putchar('0' + digit);
	}
	if (n % 10000 == 0)
		_putchar('0');
	if (n % 1000 == 0)
		_putchar('0');
	if (n % 100 == 0)
		_putchar('0');
	if (n % 10 == 0)
		_putchar('0');
}
