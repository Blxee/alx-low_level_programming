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
	listint_t *node;
	unsigned int i;
	int value;

	if (head == NULL || *head == NULL)
		return (0);

	for (i = 0; i < index; i++)
	{
		head = &(*head)->next;
		if (*head == NULL)
			return (0);
	}

	node = *head;
	value = node->n;
	*head = node->next;
	free(node);

	return (value);
}
