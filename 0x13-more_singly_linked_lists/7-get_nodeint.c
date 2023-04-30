#include "lists.h"

/**
 * get_nodeint_at_index - retrieves node that's in a specified index
 *
 * @head: head (first node) of the list
 * @index: index to retrieve
 *
 * Return:
 *	a pointer to the node if it exists
 *	NULL elsewise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}

