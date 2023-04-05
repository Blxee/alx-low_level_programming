#include "main.h"

/**
 * factorial - calculate the factorial of an integer
 * @n: an integer
 * Return: the factorial
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	return (factorial(--n));
}
