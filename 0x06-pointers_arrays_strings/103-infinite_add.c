#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: the first operand in the form of a string
 * @n2: the second operand in the form of a string
 * @r: a buffer to store the result
 * @size_r: the size of the result buffer
 * Return:
 *	the pointer to the result buffer
 *	0 if the buffer is not big enough
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, len1, len2,
	    n1_done = 0,
	    n2_done = 0,
	    carry = 0;
	char result[1024];

	for (len1 = 0; n1[len1]; len1++)
		;
	for (len2 = 0; n2[len2]; len2++)
		;

	for (i = 0; i < len1 || i < len2 || carry; i++)
	{
		int a, b, res;

		if (i == size_r - 1)
			return (0);
		a = n1[len1 - 1 - i];
		b = n2[len2 - 1 - i];
		if (!a)
			n1_done = 1;
		if (!b)
			n2_done = 1;
		a = n1_done ? 0 : (a - '0');
		b = n2_done ? 0 : (b - '0');
		res = a + b + carry;
		carry = res / 10;
		res %= 10;
		result[i] = '0' + res;
	}

	len1 = --i;

	for (i = 0; result[i]; i++)
		r[i] = result[len1 - i];
	r[i] = '\0';

	return (r);
}
