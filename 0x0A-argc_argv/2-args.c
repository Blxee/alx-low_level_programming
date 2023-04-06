#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all passed arguments
 * @argc: number of command line arguments
 * @argv: the command line arguments
 * Return: Always EXIT_SUCCESS = 0
 */

int main(int argc, char *argv[])
{
	int i;

	while (i < argc)
		puts(argv[i++]);
	return (EXIT_SUCCESS);
}
