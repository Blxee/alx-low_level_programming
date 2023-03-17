#include <stdio.h>

/**
 * main - Entry point
 * Description: print the alphabet lower case and upper case
 * Return: (0)
 */
int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (char c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
