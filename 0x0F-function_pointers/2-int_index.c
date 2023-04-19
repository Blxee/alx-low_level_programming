#include "function_pointers.h"

/**
 * int_index - searches for integer in an array
 *
 * @array: an array to search
 * @size: size of the array
 * @cmp: function to use as predicate
 *
 * Return:
 *  the index of the element if it was found
 *  -1 if the size < 0 or element does not exist
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
		if ((*cmp)(array[i]))
			return (i);
	return (-1);
}
