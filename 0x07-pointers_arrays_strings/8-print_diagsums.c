#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of a diagonal line of numbers in a matrix
 * @a: the matrix to use
 * @size: the length of the line of numbers
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	for (sum1 = 0, i = 0; i < size; i++)
		sum1 += a[i * size + i];

	for (sum2 = 0, i = 0; i < size; i++)
		sum2 += a[i * size + size - 1 - i];

	printf("%d, %d\n", sum1, sum2);
}
