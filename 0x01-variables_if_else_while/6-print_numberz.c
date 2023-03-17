#include <stdio.h>

/**
 * main - Entry point
 * Description: print all digits using only putchar
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);
	putchar('\n');
}
