#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Multimplies two positive numbers, then prints the result
 * argc: argument count
 * argv: argument vector
 * Return:
 *	0 if the program was successful
 *	98 elsewise
 */

int main(int argc, char *argv[])
{
	int len1, len2, len3, digit1, digit2, i, j, k, l, rem;
	char *result, *num1, *num2;

	if (argc != 3)
	{
		puts("Error");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];
	len1 = strlen(num1);
	len2 = strlen(num2);
	len3 = len1 + len2 + 1;

	result = malloc((len3 + 1) * sizeof(*result));

	if (!result)
	{
		puts("Error");
		return (98);
	}

	for (i = 0; i <= len3; i++)
		result[i] = '0';
	result[i] = '\0';

	for (i = len1 - 1, k = 0; i >= 0; i--, k++)
	{
		digit1 = num1[i] - '0';

		if (!(digit1 >= 0 && digit1 <= 9))
		{
			puts("Error");
			return (98);
		}

		for (j = len2 - 1, l = len3 - k, rem = 0; j >= 0 || rem; j--, l--)
		{
			if (j < 0) {
				rem += result[l] - '0';
				result[l] = rem % 10 + '0';
				rem /= 10;
				continue;
			}

			digit2 = num2[j] - '0';

			if (!(digit2 >= 0 && digit2 <= 9))
			{
				puts("Error");
				return (98);
			}

			rem += digit1 * digit2 + (result[l] - '0');
			result[l] = rem % 10 + '0';
			rem /= 10;
		}
	}

	while (*result == '0')
		result++;
	puts(result);
	free(result);
	return (EXIT_SUCCESS);
}
