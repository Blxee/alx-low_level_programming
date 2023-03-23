#include "main.h"

/**
 * print_diagonal - Prints a diagonal line in the terminal
 * @n: The length of the line
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	
	while (n--)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
