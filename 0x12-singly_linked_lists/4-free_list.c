#include "lists.h"

/**
 * free_list - frees a list from memory
 *
 * @head: head (first node) of the list
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
