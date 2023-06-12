#include "main.h"
#include <stdlib.h>

/**
 * _strdup - points to a new string dublicate of param str
 * @str: string
 * Return: a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *dplc_str;
	int i = 0;
	int length = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
	{
		length++;
		i++;
	}

	length++;

	dplc_str = malloc(sizeof(char) * length);

	if (dplc_str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < length)
	{
		*(dplc_str + i) = *(str + i);
		i++;
	}

	return (dplc_str);
}
