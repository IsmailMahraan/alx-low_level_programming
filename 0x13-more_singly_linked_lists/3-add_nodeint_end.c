#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of list.
 * @head: Address of the first node of list.
 * @n: Integer to insert in the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp1, *tmp2;

	tmp1 = malloc(sizeof(listint_t));
	if (tmp1 == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp1;
		return (tmp1);
	}

	tmp2 = *head;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp;
	return (tmp1);
}
