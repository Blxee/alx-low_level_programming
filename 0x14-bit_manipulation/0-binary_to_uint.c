#include "main.h"

/**
 * binary_to_uint - parses binary string
 *
 * @b: the string containg base 2 number
 *
 * Return:
 *	the pased number on success
 *	0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, len, i, pow;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
		if (b[len] != '0' && b[len] != '1')
			return (0);

	result = 0;
	pow = 1;
	i = len - 1;
	while (1)
	{
		if (b[i] == '1')
			result += pow;
		pow *= 2;
		if (i == 0)
			break;
		i--;
	}

	return (result);
}
