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
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);

		printf("%c", i == 100
				? '\n'
				: ' ');
	}

	return (0);
}
