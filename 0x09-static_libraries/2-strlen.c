#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string parameter
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int strlen, i;

	strlen = 0;

	for (i = 0; s[i]; i++)
	{
		strlen += 1;
	}

	return (strlen);
}
