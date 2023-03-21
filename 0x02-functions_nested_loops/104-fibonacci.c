#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int i;
	long num1 = 1, num2 = 2, temp;

	for (i = 0; i < 98; i++)
	{
		if (i == 49)
			printf("%ld\n", num1);
		else
			printf("%ld, ", num1);

		temp = num2;
		num2 += num1;
		num1 = temp;
	}

	return (0);
}
