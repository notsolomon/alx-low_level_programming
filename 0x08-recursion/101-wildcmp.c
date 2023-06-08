#include "main.h"
/**
 * match_substr - check if substr matchs s1
 * @s1: string
 * @s2: string
 * @after: position after wildcard
 *
 * Return: 1 if matched
 * 0 otherwise
 */

int match_substr(char *s1, char *s2, char *after)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == '\0' && *s2 == '\0')
		return (match_substr(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);

	if (*s2 == '*')
		return (match_substr(s1, s2 + 1, s2 + 1));

	if (*s2 == *s1)
		return (match_substr(s1 + 1, s2 + 1, after));
	else
		return (match_substr(s1 + 1, after, after));
}

/**
 * wildcmp - compares two string
 * @s1: string
 * @s2: string
 *
 * Return: 1 if strings are identical
 * 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 +1));
	else if (*s2 == '*')
		return (match_substr(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}
