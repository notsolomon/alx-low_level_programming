#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *concat;

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i))
	{
		len1++; i++;
	}

	while (*(s2 + j))
	{
		len2++;
		j++;
	}

	len2++;
	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	i = 0;
	j = 0;

	while (i < len1)
	{
		*(concat + i) = *(s2 + j);
		i++;
	}

	while (j < len2)
	{
		*(concat + i) = *(s2 + j);
		i++;
		j++;
	}

	return (concat);
}
