#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Password generayor for keygen
 * Return: Always 0
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));

	for (sum = 0; sum <= 2645; sum += c)
	{
		c = rand() % 128;
		putchar(c);
	}

	putchar(2772 - sum);
	return (0);
}
