#include "main.h"

/**
 * print_sign - checks the sign of an integer and ptints it
 * @n: the integer to check
 * Return:
 * 1 if the int is positive
 * 0 if the int is zero
 * -1 if the int is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
