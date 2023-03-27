#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: the address of the first integer
 * @b: the address of the second integer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
