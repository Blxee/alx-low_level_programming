#include "lists.h"

/**
 * delete_nodeint_at_index - deletes element at the specified index
 *
 * @head: pointer to the head of the list
 * @index: the index to remove from the list
 *
 * Return:
 *	the value at the removed node if found
 *	0 elsewise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t **tail, *node;
	unsigned int i;
	int value;

	if (*head == NULL)
		return (0);

	tail = head;
	for (i = 0; i < index; i++)
	{
		tail = &(*tail)->next;
		if (*tail == NULL)
			return (0);
	}

	node = *tail;
	value = (*tail)->n;
	*tail = (*tail)->next;
	free(node);

	return (value);
}
