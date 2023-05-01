#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head: first node of the list
 *
 * Return: pointer to the head (first node) of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nex, *pre;

	if (head == NULL || *head == NULL)
		return (NULL);

	pre = NULL;
	while ((*head)->next != NULL)
	{
		nex = (*head)->next;
		(*head)->next = pre;
	    pre = *head;
		*head = nex;
	}
	(*head)->next = pre;

	return (*head);
}
