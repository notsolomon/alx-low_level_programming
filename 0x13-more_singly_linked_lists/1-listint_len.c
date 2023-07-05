#include "lists.h"

/**
 * listint_len - return number of elements in a linked list
 * @h: pointer to linked list
 *
 * Return: number of nodes in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		num_of_nodes += 1;
		h = h->next;
	}

	return (num_of_nodes);
}
