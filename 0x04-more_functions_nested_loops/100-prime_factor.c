#include <stdio.h>

long get_prime(long);

/**
 * main - Print the larget prime factor of 612852475143
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long num = 612852475143, i, factor;

	for (i = 3; i * i <= num; i += 2)
		while (num % i == 0)
		{
			num /= i;
			factor = i;
		}

	printf("%lu\n", factor);
	return (0);
}
