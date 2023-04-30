
#include "lists.h"

/**
 * insert_nodeint_at_index - add a new element at a specific index of a list
 *
 * @head: pointer to the head of the list
 * @idx: the index at which to add the new node
 * @n: value of the new element
 *
 * Return:
 *	address of the new node when successful
 *	NULL elsewise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, **tail;
	unsigned int i;

	tail = head;
	for (i = 0; i < idx; i++)
	{
		if (*tail == NULL)
			return (NULL);
		tail = &(*tail)->next;
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *tail;

	*tail = new;

	return (new);
}
