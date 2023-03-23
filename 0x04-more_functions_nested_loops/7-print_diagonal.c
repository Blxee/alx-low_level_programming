#incllude "main.h"

/**
 * print_diagonal - Prints a diagonal line in the terminal
 * @n: The length of the line
 */

void print_diagonal(int n)
{
	int i = 0, j;

	_putchar('\n');
	if (n > 0)
		while (n--)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			i++;
		}
}
