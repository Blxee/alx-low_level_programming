#include <stdio.h>
#include <unistd.h>

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
				write(STDOUT_FILENO, "0", 1);
				putchar('0' + i);
			}
			else
			{
				putchar('0' + i / 10);
				putchar('0' + i % 10);
			}
			write(STDOUT_FILENO, " ", 1);
			if (j < 10)
			{
				write(STDOUT_FILENO, "0", 1);
				putchar('0' + j);
			}
			else
			{
				putchar('0' + j / 10);
				putchar('0' + j % 10);
			}
			if (!(i == 98 && j == 99))
			{
				write(STDOUT_FILENO, ", ", 2);
			}
		}
	}
	write(STDOUT_FILENO, "\n", 1);

	return (0);
}
