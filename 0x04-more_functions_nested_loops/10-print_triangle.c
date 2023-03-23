#include "main.h"

/**
 * print_triangle - Draw a triangle in the terminal using astrisks *
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	int i = size, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i--)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		for (j = 0; j < size - i; j++)
			_putchar('#');
		_putchar('\n');
	}
}
