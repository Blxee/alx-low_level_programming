#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c != 'z' + 1)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);
}
