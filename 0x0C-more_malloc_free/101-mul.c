#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mult(char *result, char *num1, char *num2, int len1, int len2, int len3);

/**
 * main - Multiplies two positive numbers, then prints the result
 * @argc: argument count
 * @argv: argument vector
 * Return:
 *	0 if the program was successful
 *	98 elsewise
 */

int main(int argc, char *argv[])
{
	int len1, len2, len3, i;
	char *result, *num1 = argv[1], *num2 = argv[2];

	if (argc != 3)
	{
exit_label:
		printf("Error\n");
		return (98);
	}

	for (i = 0; num1[i]; i++)
		if (!(num1[i] >= '0' && num1[i] <= '9'))
			goto exit_label;
	for (i = 0; num2[i]; i++)
		if (!(num2[i] >= '0' && num2[i] <= '9'))
			goto exit_label;

	len1 = strlen(num1);
	len2 = strlen(num2);
	len3 = len1 + len2;

	result = malloc((len3 + 1) * sizeof(*result));

	if (!result)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 0; i < len3; i++)
		result[i] = '0';
	result[i] = '\0';

	mult(result, num1, num2, len1, len2, len3);

	while (*result == '0' && result[1] != '\0')
		result++;
	printf("%s\n", result);
	free(result);
	return (EXIT_SUCCESS);
}

/**
 * mult - multiplies two numbers as strings
 * @result: a pointer to store the result
 * @num1: first operand
 * @num2: second operand
 * @len1: length of first operand
 * @len2: length of second operand
 * @len3: length of the result
 */

void mult(char *result, char *num1, char *num2, int len1, int len2, int len3)
{
	int i, j, k, l, digit1, digit2, rem;

	for (i = len1 - 1, k = 0; i >= 0; i--, k++)
	{
		digit1 = num1[i] - '0';

		for (j = len2 - 1, l = len3 - 1 - k, rem = 0; j >= 0 || rem; j--, l--)
		{
			if (j < 0)
			{
				rem += result[l] - '0';
				result[l] = rem % 10 + '0';
				rem /= 10;
				continue;
			}

			digit2 = num2[j] - '0';

			rem += digit1 * digit2 + (result[l] - '0');
			result[l] = rem % 10 + '0';
			rem /= 10;
		}
	}
}
