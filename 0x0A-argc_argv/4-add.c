#include <stdio.h>
#include <stdlib.h>

/**
 * is_num - Checks whether a string is a number
 * @s: the string to check
 * Return: 1 is @s is a number and 0 if not
 */

int is_num(char *s)
{
	if (*s == '-')
		s++;
	while (*s)
	{
		if (!(*s >= '0' && *s <= '9'))
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - Takes its arguments and print thier sum
 * @argc: number of command line arguments
 * @argv: the command line arguments
 * Return:
 *	EXIT_SUCCESS = 0 if the arguments are correct
 *	EXIT_FAILURE = 1 elsewise
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	while (*++argv)
	{
		if (!is_num(*argv))
		{
			puts("Error");
			return (EXIT_FAILURE);
		}
		sum += atoi(*argv);
	}
	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}
