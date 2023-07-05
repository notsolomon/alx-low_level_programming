#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: listint_t linked list
 *
 * Return: head node data (n)
 * 0 if linked node is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (n);

	tmp = *head;
	n = tmp->n;

	*head = tmp->next;
	free(tmp);

	return (n);
}
