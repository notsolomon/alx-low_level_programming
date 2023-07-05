#include "lists.h"

/**
 * count_nodes - count nodes to tell unque nodes to print
 * @head: linked list
 *
 * Return: number of unique node in list
 */

int count_nodes(const listint_t *head)
{
	int count = 0;
	const listint_t *a = head;
	const listint_t *b = head;

	while (a != NULL && b != NULL)
	{
		a = a->next;
		b = b->next->next;
		count++;

		if (a == b)
		{
			const listint_t *temp = head;
			while (temp != b)
			{
				b = b->next;
				count++;
			}
			return count;
		}
	}

	return (0);
}

/**
 * has_loop - checks if loop exists
 * @head: linked list
 *
 * Return: 1 if loop exists
 * 0 otherwise
 */
int has_loop(const listint_t *head)
{
	const listint_t *a = head;
	const listint_t *b = head;

	while (a != NULL && b != NULL)
	{
		a = a->next;
		b = b->next;
	
		if (b != NULL)
			b = b->next;

		if (a == b)
			return 1;
	}

	return 0;
}

/**
 * print_listint_safe - prints lists w addresses
 * @head: pointer to linked list
 *
 * Return: number of nodes in list
 * exit(98) otherwise
 */

size_t print_listint_safe(const listint_t *head)
{
	int i;
	int count = 0;
	size_t num_nodes = 0;
	const listint_t *tmp;

	if (head == NULL)
		exit(98);

	loop_found = has_loop(head);

	if (loop_found == 1)
	{
		count = count_nodes(head);
		tmp = head;

		for (i = 0; i < count; i++)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			num_nodes += 1;
			tmp = tmp->next;
		}
	}
	else if (loop_found == 0)
	{
		tmp = head;
		while (tmp != NULL)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			num_nodes += 1;
			tmp = tmp->next;
		}
	}

	return num_nodes;
}


