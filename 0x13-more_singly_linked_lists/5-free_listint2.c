#include "lists.h"

/**
 * free_list - frees a list from memory
 *
 * @head: head (first node) of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *next, *current;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
