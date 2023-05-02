#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 *
 * @head: first node of the list
 *
 * Return:
 *	the address of the node where the loop starts
 *	NULL if there is no loop in the list
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		while (node != NULL)
		{
			if (head == node)
				return (head);
			node = node->next;
		}
		head = head->next;
	}

	return (NULL);
}
