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
	listint_t *slow_p, *fast_p;

	if (!head || !head->next)
		return (NULL);

	slow_p = head;
	fast_p = head->next;

	while (fast_p && fast_p->next)
	{
		if (slow_p == fast_p)
			return (slow_p);
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
	}

	return (NULL);
}
