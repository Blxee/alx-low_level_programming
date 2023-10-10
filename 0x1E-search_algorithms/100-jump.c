#include <math.h>
#include "search_algos.h"

/**
 * jump_search - function that searches for a value
 *	in an array of integers using the Jump search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	const size_t jump_size = (size_t)sqrt(size);
	size_t i = 0, j;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	while (i + jump_size < size && array[i + jump_size] < value)
	{
		i += jump_size;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, i + jump_size);

	j = i;
	while (j < size && j <= i + jump_size)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}
	return (-1);
}
