#include <stdio.h>

/**
 * main - print the sum of even valued terms below 4,000,000
 * Return: Always 0
 */
int main(void)
{
	int num1 = 1,
	    num2 = 2,
	    temp;
	long sum = 0;

	while (num2 < 4000000)
	{
		if (num2 % 2 == 0)
			sum += num2;
		temp = num1;
		num1 = num2;
		num2 += temp;
	}

	printf("%ld\n", sum);

	return (0);
}
