#include <stdio.h>

/**
 * main - Implement fizzbuzz
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % (3 * 5) == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		putchar(i == 100
				? '\n'
				: ' ');
	}

	return (0);
}
