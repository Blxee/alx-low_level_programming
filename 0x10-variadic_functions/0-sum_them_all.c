#include "variadic_functions.h"

/**
 * sum_them_all - sums var args given
 *
 * @n: argument count
 *
 * Return: the sum of all its var args
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list va;

	va_start(va, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(va, int);
	va_end(va);

	return (sum);
}
