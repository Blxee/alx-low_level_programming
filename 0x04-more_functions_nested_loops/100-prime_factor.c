#include <stdio.h>

/**
 * main - Print the larget prime factor of 612852475143
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long original = 612852475143, num, i, factor;

	num = original;
	factor = 0;

	for (i = 3; num != 1; i += 2)
	{
		while (num % i == 0)
		{
			num /= i;
			factor = i;
		}
	}

	printf("%lu\n", factor);
	return (0);
}
