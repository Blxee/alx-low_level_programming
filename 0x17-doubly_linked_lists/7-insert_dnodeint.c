#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a specefied index
 *
 * @h: the head of the list
 * @idx: position to insert at
 * @n: new element to be inserted
 *
 * Return: a pointer to the newly inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *pre = NULL;

	if (h == NULL)
		return (NULL);

	while ((*h)->prev != NULL)
		h = &(*h)->prev;

	while (i < idx)
	{
		h = &(*h)->next;
		if (*h == NULL)
			return (NULL);
		i++;
	}

	if (*h != NULL)
		pre = (*h)->prev;

	new = add_dnodeint(h, n);

	return (new);
}
