#include "main.h"

/**
 * cp - comapres head and tail of match indices
 * @head: index starting from the left
 * @tail: index starting from the right
 *
 * Return: 1 if palindrome
 * 0 otherwise
 */

int cmp(char *head, char *tail)
{
	if (head >= tail)
		return (1);
	if (*head == *tail)
		return (cmp(head + 1, tail - 1));

	return (0);
}

/**
 * _strlen - checks string length
 * @s: string to count
 *
 * Return: string length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen(s));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to check
 *
 * Return: return 1 if stringis palindrome
 */

int is_palindrome(char *s)
{
	int length = _strlen(s);
	return (cmp(s, (s + length - 1)));
}
