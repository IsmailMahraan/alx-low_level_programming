#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pops the first element of a singly linked list.
 * @head: Pointer to list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int pop;

	if (*head == NULL)
		return (0);

	tp = *head;
	*head = tp->next;
	pop = tp->n;
	free(tp);
	return (pop);
}
