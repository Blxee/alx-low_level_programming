#include "main.h"

/**
 * is_prime_number - checks whether an integer is prime or not
 * @n: the integer to check
 * Return:
 *  1 in case the number was a prime
 *  0 if not
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	return (_is_prime_number(n, n - 1));
}

/**
 * _is_prime_number - helper recursive function for is_prime_number
 * @n: the integer to check
 * @m: the number to check whether it devides @n
 * Return:
 *  1 in case the number was a prime
 *  0 if not
 */

int _is_prime_number(int n, int m)
{
	if (m == 1)
		return (1);
	if (n / m == (double)n / m)
		return (0);
	return (_is_prime_number(n, m - 1));
}
