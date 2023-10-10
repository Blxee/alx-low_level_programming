#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value
 *	in an array of integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t m, l = 0, r = size - 1;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		m = l + ((value - array[l]) * (r - l)) / (array[r] - array[l]);
		if (m >= size)
		{
			printf("Value checked array[%ld] is out of range\n", m);
			return (-1);
		}
		else
			printf("Value checked array[%ld] = [%d]\n", m, array[m]);
		if (value < array[m])
			r = m - 1;
		else if (value > array[m])
			l = m + 1;
		else
			return (m);
	}

	return (-1);
}
