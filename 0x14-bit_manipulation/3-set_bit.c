#include "main.h"

/**
 * set_bit - sets the bit at index to 1
 *
 * @n: a number to set its bit
 * @index: the index of the bit
 *
 * Return:
 *	1 if it was successful
 *	-1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n |= 1 << index;
	return (1);
}
