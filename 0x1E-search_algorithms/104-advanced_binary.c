#include "search_algos.h"

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
	size_t m, l = 0, r = size - 1;
	size_t i;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		i = l;
		while (i <= r)
			if (i == r)
				printf("%d\n", array[i++]);
			else
				printf("%d, ", array[i++]);
		m = (l + r) / 2;
		if (value < array[m])
			r = m - 1;
		else if (value > array[m])
			l = m + 1;
		else
		{
			while (m > 0 && array[m - 1] == array[m])
				m--;
			return (m);
		}
	}

	return (-1);
}
