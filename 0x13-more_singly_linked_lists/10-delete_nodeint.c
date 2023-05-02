#include "lists.h"

/**
 * delete_nodeint_at_index - deletes element at the specified index
 *
 * @head: pointer to the head of the list
 * @index: the index to remove from the list
 *
 * Return:
 *	1 if the delete was successful
 *	-1 elsewise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	for (i = 0; i < index; i++)
	{
		head = &(*head)->next;
		if (*head == NULL)
			return (-1);
	}

	node = *head;
	*head = node->next;
	free(node);

	return (1);
}
