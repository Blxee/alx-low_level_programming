#include "main.h"

/**
 * print_square - Draws a square in the terminal using hashtags #
 * @size: The size of the square
 */

void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (size--)
	{
		for (i = 0; i < size + 1; i++)
			_putchar('#');
		_putchar('\n');
	}
}
