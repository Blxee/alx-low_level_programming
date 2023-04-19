#include <stdio.h>
#include <ctype.h>

/**
 * main - prints its main function's opcodes followed by a new line
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return:
 *	0 if it was successful
 *	1 if arguments passed are wrong
 *	2 if number passed in nagative
 */
int main(int argc, char *argv[])
{
	int i, num;
	char *code = (char *)&main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < num; i++)
	{
		printf("%02hhx", code[i]);
		if (i < num - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
