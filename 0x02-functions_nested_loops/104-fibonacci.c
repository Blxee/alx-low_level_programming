#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long num_a1 = 1,
		      num_a2 = 0,
		      num_b1 = 2,
		      num_b2 = 0,
		      THRESHHOLD = 1000000;

	for (i = 0; i < 98; i++)
	{
		unsigned long temp;

		if (num_a2 > 0)
			printf("%lu", num_a2);
		if (i == 97)
			printf("%lu\n", num_a1);
		else
			printf("%lu, ", num_a1);

		temp = num_b1;
		num_b1 += num_a1;
		num_a1 = temp;

		temp = num_b2;
		num_b2 += num_a2;
		num_a2 = temp;

		num_a2 += num_a1 / THRESHHOLD;
		num_a1 %= THRESHHOLD;

		num_b2 += num_b1 / THRESHHOLD;
		num_b1 %= THRESHHOLD;
	}

	return (0);
}
