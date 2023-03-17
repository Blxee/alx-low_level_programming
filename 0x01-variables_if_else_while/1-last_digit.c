#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: get info about last digit of n
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_digit = n % 10;

	printf("Last digit of %d is %d and is ", n, last_digit);
	if (last_digit > 5)
	{
		puts("greater than 5");
	}
	else if (last_digit < 6)
	{
		if (last_digit == 0)
			puts("0");
		else
			puts("less than 6 and not 0");
	}

	return (0);
}
