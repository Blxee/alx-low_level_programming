#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 *	using the Jump search algorithm
 *
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 *
 * Return: a pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	const size_t jump_size = (size_t)sqrt(size);
	listint_t *cur = list, *nex = list;
	size_t j;

	if (list == NULL || size == 0)
		return (NULL);

	for (j = 0; j < jump_size && nex->next; j++)
		nex = nex->next;
	printf("Value checked at index [%ld] = [%d]\n", nex->index, nex->n);
	while (cur->index + jump_size < size && nex->n < value)
	{
		cur = nex;
		for (j = 0; j < jump_size && nex->next; j++)
			nex = nex->next;
		printf("Value checked at index [%ld] = [%d]\n", nex->index, nex->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
				cur->index, nex->index);

	while (j < size && cur)
	{
		printf("Value checked at index [%ld] = [%d]\n", cur->index, cur->n);
		if (cur->n == value)
			return (cur);
		cur = cur->next;
	}
	return (NULL);
}
