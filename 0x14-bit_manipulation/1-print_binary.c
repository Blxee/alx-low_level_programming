#include "main.h"

/**
 * power - raises an integer to a specified power
 *
 * @n: a number to raise to a power
 * @p: the power to raise to
 *
 * Return: the result of the operation
 */
unsigned long power(unsigned long n, unsigned long p)
{
	unsigned long result = 1;

	while (p--)
		result *= n;
	return (result);
}

/**
 * print_binary - prints an integer in base 2
 *
 * @n: an integer to print
 */
void print_binary(unsigned long int n)
{
	unsigned long bit = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (power(2, bit) <= n)
		bit++;

	while (bit--)
	{
		unsigned int pow = power(2, bit);

		if (pow <= n)
		{
			_putchar('1');
			n -= pow;
		}
		else
			_putchar('0');
	}
}
