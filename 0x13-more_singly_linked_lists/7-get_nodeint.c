#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find a node in list.
 * @head: Address of the first node in list.
 * @index: Position of a the node to be found.
 * Return: Node address.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	for (counter  = 0; counter  < index; counter++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
