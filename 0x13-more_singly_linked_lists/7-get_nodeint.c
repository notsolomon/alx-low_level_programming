#include "lists.h"

/**
 * get_nodeint_at_index - returns node at nth
 * @head: pointer to linked list
 * @index: nth
 * Return: nth node of linked list
 * NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((i < index) && head != NULL)
	{
		head = head->next;
		i++;
	}

	if (i == index)
		return (head);

	return (NULL);
}
