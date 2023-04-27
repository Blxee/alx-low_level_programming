#include "lists.h"

/**
 * free_list - frees a list from memory
 *
 * @h: head (first node) of the list
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head->next != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
	free(head);
}
