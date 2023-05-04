#include "main.h"

/**
 * print_binary - prints an integer in base 2
 *
 * @n: an integer to print
 */
void print_binary(unsigned long int n)
{
	unsigned long i, len = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; i < sizeof(int) * 8; i++)
		if (n & (1 << i))
			len = i;

	do {
		unsigned long bit = 1 << len;

		if (n & bit)
			_putchar('1');
		else
			_putchar('0');
	} while (len--);
}
