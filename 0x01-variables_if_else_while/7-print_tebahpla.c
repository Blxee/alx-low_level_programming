#include <stdio.h>

/**
 * main - Entry point
 * Description: print all lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	for (char c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
