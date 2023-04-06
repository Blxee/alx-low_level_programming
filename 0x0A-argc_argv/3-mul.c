#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the product of two numbers passed as arguments
 * @argc: number of command line arguments
 * @argv: the command line arguments
 * Return:
 *	EXIT_SUCCESS = 0 if the arguments are correct
 *	EXIT_FAILURE = 1 elsewise
 */

int main(int argc, char *argv[])
{
	if (argc >= 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (EXIT_SUCCESS);
	}
	puts("Error");
	return (EXIT_FAILURE);
}
