#include <stdio.h>

/**
 * main - print the sum of multiples of 5 and 3 below 1024
 * Return: Always 0
 */
int main(void)
{
	int i, res;

	for (i = 3; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			res += i;

	printf("%d\n", res);

	return (0);
}
