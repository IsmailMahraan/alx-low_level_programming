#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sum all of the data (n) in list.
 * @head: Address of the first node of list.
 * Return: Integer.
 **/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
