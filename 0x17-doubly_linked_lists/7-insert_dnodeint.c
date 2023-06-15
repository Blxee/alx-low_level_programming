#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a specefied index
 *
 * @h: the head of the list
 * @idx: position to insert at
 * @n: new element to be inserted
 *
 * Return: a pointer to the newly inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t **head = h, *new, *pre = NULL;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint_end(h, n));
	else if (*h == NULL)
		return (NULL);

	/*
	while ((*h)->prev != NULL)
		h = &(*h)->prev;
	*/

	while (i < idx)
	{
		if ((*h)->next == NULL && i == idx - 1)
			return (add_dnodeint_end(h, n));
		h = &(*h)->next;
		i++;
	}

	pre = (*h)->prev;
	(*h)->prev = NULL;

	new = add_dnodeint(h, n);

	new->prev = pre;
	pre->next = new;

	return (new);
}



int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
