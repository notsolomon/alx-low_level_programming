#include "lists.h"

/**
 * size_t - returns number of elements in list
 * @h: list
 *
 * Return: number of list elements
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
