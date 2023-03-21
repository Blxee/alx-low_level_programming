#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all numbers between the passed int and 98
 * @n:  the integer to start from
 */
void print_to_98(int n)
{
	int inc;

	if (n <= 98)
		inc = 1;
	else
		inc = -1;

	for (; n != 98 + inc; n += inc)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
	}
	_putchar('\n');
}
