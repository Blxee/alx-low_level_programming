#include "search_algos.h"

/**
 * seg_binary_search - function that searches for a value
 *	in an array of integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @left: left index to start searching from
 * @right: right index to stop searching at
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */
int seg_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t m;
	size_t i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		i = left;
		while (i <= right)
			if (i == right)
				printf("%d\n", array[i++]);
			else
				printf("%d, ", array[i++]);
		m = (left + right) / 2;
		if (value < array[m])
			right = m - 1;
		else if (value > array[m])
			left = m + 1;
		else
			return (m);
	}

	return (-1);
}

/**
 * exponential_search - function that searches for a value
 *	in an array of integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, l, r;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	l = i / 2;
	r = size - 1 < i ? size - 1 : i;
	printf("Value found between indexes [%ld] and [%ld]\n", l, r);

	return (seg_binary_search(array, l, r, value));
}
