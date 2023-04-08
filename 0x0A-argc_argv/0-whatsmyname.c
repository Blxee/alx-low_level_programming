#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints its executable file name
 * @argc: number of command line arguments
 * @argv: the command line arguments
 * Return: Always EXIT_SUCCESS = 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	puts(argv[0]);
	return (EXIT_SUCCESS);
}
