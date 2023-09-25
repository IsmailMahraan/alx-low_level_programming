#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of singly linked list.
 * @h: Pointer to  list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int counter = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		counter++;
		tp = tp->next;
	}
	return (counter);
}
