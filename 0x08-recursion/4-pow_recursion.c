#include "main.h"

/**
 * _pow_recursion - calculates the result
 *	of an int raised to the power of another
 * @x: an integer number
 * @y: the power to raise @x to
 * Return: the result of @x ^ @y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, --y));
}
