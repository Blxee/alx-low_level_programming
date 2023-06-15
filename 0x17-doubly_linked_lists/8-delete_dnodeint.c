#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at specific index from a list
 *
 * @head: the address of head of the list
 * @index: index of node to be deleted
 *
 * Return: 1 on success or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_p, node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	node_p = *head;

	while (node_p->prev != NULL)
		node_p = node_p->prev;

	while (i++ < index)
	{
		node_p = node_p->prev;
		if (node_p == NULL)
			return (-1);
	}

	node = *node_p;
	free(node_p);

	return (node.n);
}
