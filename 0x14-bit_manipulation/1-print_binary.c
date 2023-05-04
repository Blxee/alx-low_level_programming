#include "main.h"

/**
 * print_binary - prints an integer in base 2
 *
 * @n: an integer to print
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
