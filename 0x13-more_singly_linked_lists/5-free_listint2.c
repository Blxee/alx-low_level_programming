#include "lists.h"

/**
 * free_listint2 - frees a list from memory
 *
 * @head: head (first node) of the list
 */
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
