#include "lists.h"

/**
 * add_nodeint - adds new node to the list
 * @head: linked list
 * @n: node to add
 *
 * Return: address of the new element
 * NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;

	node->next = *head;
	*head = node;

	return (node);
}
