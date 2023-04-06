#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum amount of coins in change (cents)
 * @argc: number of command line arguments
 * @argv: the command line arguments
 * Return:
 *	EXIT_SUCCESS = 0 if the arguments are correct
 *	EXIT_FAILURE = 1 elsewise
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int *coin = coins;
	int change, min;

	if (argc != 2)
	{
		puts("Error");
		return (EXIT_FAILURE);
	}

	change = atoi(*++argv);
	min = 0;

	while (change)
		if (change >= *coin)
		{
			min++;
			change -= *coin;
		}
		else
			coin++;

	printf("%d\n", min);
	return (EXIT_SUCCESS);
}
