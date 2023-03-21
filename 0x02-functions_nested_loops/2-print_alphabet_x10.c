#include "main.h"

/**
 * void print_alphabet_x10 - print the alphabet in lowercase 10x times
 * Description: prints the alphabet 10x times
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		while (c != 'z' + 1)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
		c = 'a';
	}
}
