#include "main.h"
#define NULL 0

/**
 * *_strchr - locates a character in a string
 * @s: String
 * @c: character to located in s
 *
 * Return: A pointer to the first occurence of
 * the character. Null otherwise
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
