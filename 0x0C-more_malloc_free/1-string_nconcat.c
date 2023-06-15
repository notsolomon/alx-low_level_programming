#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @string: param
 *
 * Return: string length
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i]; i++)
		;

	return (i);
}

/**
 * string_nconcat - concatenates 2 strings
 * @s1: str 1
 * @s2: str 2
 * @n: int
 *
 * Return: pointer to new allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, num, len;
	char *ptr;

	num = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (num >= _strlen(s2))
		num = _strlen(s2);

	len = _strlen(s1) + num + 1;

	ptr = malloc(sizeof(*ptr) * len);

	if (ptr == NULL)
		return NULL;

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];

	ptr[i+j] = '\0';
	return (ptr);
}
