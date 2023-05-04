#include "main.h"

/**
 * flip_bits - determines how many bitwise flips needed
 *	to convert from number to the other
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of flips needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;

	n ^= m;

	while (n)
	{
		if (n & 1)
			bits++;
		n >>= 1;
	}

	return (bits);
}
