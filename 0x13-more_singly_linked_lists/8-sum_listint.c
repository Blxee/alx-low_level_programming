#include "lists.h"

/**
 * sum_listint - calculates the sum of all the elements in a list
 *
 * @head: head (first node) of the list
 *
 * Return:
 *	the sum of all the elements
 *	0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

