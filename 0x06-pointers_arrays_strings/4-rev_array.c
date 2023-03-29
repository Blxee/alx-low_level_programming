#include "main.h"

/**
 * reverse_array - Reverses elements of an array
 * @a: the array to reverse
 * @n: the length of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp[1024];

	i = 0;
	while (i < n)
	{
		temp[i] = a[i];
		i++;
	}

	i = 0;
	while (i < n)
	{
		a[i] = temp[n - 1 - i];
		i++;
	}
}
