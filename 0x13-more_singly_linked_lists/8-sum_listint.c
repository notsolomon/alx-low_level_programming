#include "lists.h"

/**
 * sum_listint - return sum of all data of linked list
 * @head: linked list
 *
 * Return: data (n)
 * 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
