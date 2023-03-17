#include <stdio.h>

/**
 * main - Entry point
 * Description: print all lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
