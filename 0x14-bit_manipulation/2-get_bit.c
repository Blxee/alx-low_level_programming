#include "main.h"

/**
 * get_bit - return the value of the bit at a specific index
 *
 * @n: a number to look for bit
 * @index: the index of the bit
 *
 * Return:
 *	the value of the bit if it was found
 *	-1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
