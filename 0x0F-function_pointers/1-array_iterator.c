#include "function_pointers.h"

/**
 * array_iterator - traverses an array and applies a function to each element
 *
 * @array: an array to traverse
 * @size: the size of the array
 * @action: a function to apply
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
