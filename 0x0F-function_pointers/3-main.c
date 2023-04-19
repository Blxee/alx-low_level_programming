#include "3-calc.h"
#include <ctype.h>

/**
 * main - perform an operation on two integers, and print the result
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return:
 *	0 if the operation was successful
 *	98 if arguments are not correct
 *	99 if operation does not exist
 *	100 when trying to divide by 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result, (*func)(int, int);

	if (argc != 4)
	{
		puts("Error");
		return (98);
	}

	func = get_op_func(argv[2]);

	if (!func || argv[2][1])
	{
		puts("Error");
		return (99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		puts("Error");
		return (100);
	}

	result = func(num1, num2);

	printf("%d\n", result);
	return (0);
}
