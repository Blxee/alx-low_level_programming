#include "lists.h"

/**
 * free_list - frees a list from memory
 *
 * @head: head (first node) of the list
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
