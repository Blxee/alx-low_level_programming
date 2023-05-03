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
	listint_t *slow, *fast;

	if (head && head->next)
		if (head == head->next)
			return (head);

	slow = fast = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (slow);
	}

	return (NULL);
}
