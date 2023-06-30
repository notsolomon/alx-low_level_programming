#include "lists.h"

/**
 * _strlen - find string length
 * @str: string
 *
 * Return: length
 */

int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;

	return (len);
}

/**
 * add_node - adds new node at beggining of list
 * @head: list
 * @str: string
 *
 * Return: new node address
 * NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (str == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);

	if (head == NULL)
	{
		node->next = NULL;
	}
	else
	{
		node->next = *head;
	}

	*head = node;

	return (node);
}
