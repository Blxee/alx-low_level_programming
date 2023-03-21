#include "main.h"

/**
 * print_last_digit - prints and returns the last digit of an integer
 * @n: the integer to find its last digit
 * Return: the last digit of the integer
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = -last;

	_putchar('0' + last);
	return (last);
}
