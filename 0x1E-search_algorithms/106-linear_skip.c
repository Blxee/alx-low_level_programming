#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 *
 * @list: a pointer to the head of the skip list to search in
 * @value: the value to search for
 *
 * Return: a pointer to the first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *cur = list, *nex = list;

	if (list == NULL)
		return (NULL);

	nex = cur->express;
	printf("Value checked at index [%ld] = [%d]\n", nex->index, nex->n);
	while (nex->express && nex->n < value)
	{
		cur = nex;
		nex = nex->express;
		printf("Value checked at index [%ld] = [%d]\n", nex->index, nex->n);
	}

	if (nex->n < value)
	{
		cur = nex;
		while (nex->next)
			nex = nex->next;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
				cur->index, nex->index);

	while (cur)
	{
		printf("Value checked at index [%ld] = [%d]\n", cur->index, cur->n);
		if (cur->n == value)
			return (cur);
		cur = cur->next;
	}
	return (NULL);
}
