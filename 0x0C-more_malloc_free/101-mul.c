#include "main.h"

void mult(char *result, char *num1, char *num2, int len1, int len2, int len3);
int _strlen(char *str);
void _puts(char *str);

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
	int len1, len2, len3, i, neg = 0;
	char *result, *num1 = argv[1], *num2 = argv[2];

	if (*num1 == '-')
	{
		neg = !neg;
		num1++;
	}
	if (*num2 == '-')
	{
		neg = !neg;
		num2++;
	}
	if (argc != 3 || !*num1 || !*num2)
		goto exit_label;
	for (i = 0; num1[i]; i++)
		if (!(num1[i] >= '0' && num1[i] <= '9'))
			goto exit_label;
	for (i = 0; num2[i]; i++)
		if (!(num2[i] >= '0' && num2[i] <= '9'))
			goto exit_label;

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len3 = len1 + len2;

	result = malloc((len3 + 1) * sizeof(*result));

	if (!result)
		goto exit_label;

	for (i = 0; i < len3; i++)
		result[i] = '0';
	result[i] = '\0';

	mult(result, num1, num2, len1, len2, len3);

	while (*result == '0' && result[1] != '\0')
		result++;
	if (neg)
		_putchar('-');
	_puts(result);
	free(result);
	return (EXIT_SUCCESS);

exit_label:
	_puts("Error");
	return (98);
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

/**
 * _strlen - gives length of a string
 * @str: a string
 * Return: the length
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;
	return (len);
}

/**
 * _puts - prints string followed be new line
 * @str: the string to print
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
