#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments passed
 * @argc: number of command line arguments
 * @argv: the command line arguments
 * Return: Always EXIT_SUCCESS = 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", --argc);
	return (EXIT_SUCCESS);
}
