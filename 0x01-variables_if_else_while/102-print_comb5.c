#include <stdio.h>

/**
 * main - Entry point
 * Description: print every combination of 3 digits
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			if (i < 10)
			{
				putchar('0');
			}
			else
			{
				putchar('0' + i / 10);
				putchar('0' + i % 10);
			}
			putchar(' ');
			if (j < 10)
			{
				putchar('0');
			}
			else
			{
				putchar('0' + j / 10);
				putchar('0' + j % 10);
			}
			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
