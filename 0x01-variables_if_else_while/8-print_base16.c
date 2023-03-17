#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c != 'f' + 1)
	{
		putchar(c);
		if (c == '9')
			c = 'a' - 1;
		c++;
	}
	putchar('\n');

	return (0);
}
