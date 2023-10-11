#include "search_algos.h"

/**
 * _advanced_binary - function that searches for a value
 *	in an array of integers using the Advanced Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @left: left index to start searching from
 * @right: right index to stop searching at
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */
int _advanced_binary(int *array, size_t left, size_t right, int value)
{
	size_t i, m;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	i = left;
	while (i <= right)
		if (i == right)
			printf("%d\n", array[i++]);
		else
			printf("%d, ", array[i++]);

	m = (left + right) / 2;

	if (value == array[m])
	{
		if (m > left && array[m - 1] == value)
			return (_advanced_binary(array, left, m, value));
		else
			return (m);
	}
	else if (left >= right)
		return (-1);

	if (value < array[m])
		return (_advanced_binary(array, left, m - 1, value));
	else if (value > array[m])
		return (_advanced_binary(array, m + 1, right, value));

	return (-1);
}

/**
 * advanced_binary - function that searches for a value
 *	in an array of integers using the Advanced Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (_advanced_binary(array, 0, size - 1, value));
}
