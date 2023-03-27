#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n amount of an integer array followed by a new line
 * @a: the address of the first element of an integer array
 * @n: the amount to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0, n--; n >= 0; n--, i++)
		printf((!n) ? "%d\n" : "%d, ", *(a + i));
}
