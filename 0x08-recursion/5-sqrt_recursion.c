#include "main.h"

/**
 * _sqrt_recursion - calculates the square root of an integer
 * @n: an integer number
 * Return:
 *	the square root of @n
 *	-1 if the number has no square root or it is float number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_inner_sqrt(n, n / 2 + 1));
}

/**
 * _inner_sqrt - helper recursive function for _sqrt_recursion
 * @n: an integer number
 * @m: a helper value meant to be used by _sqrt_recursion
 * Return:
 *	the square root of @n
 *	-1 if the number has no square root or it is float number
 */

int _inner_sqrt(int n, int m)
{
	unsigned long l = m * m;

	if (l == n)
		return (m);
	if (m == 0)
		return (-1);
	return (_inner_sqrt(n, m - 1));
}
