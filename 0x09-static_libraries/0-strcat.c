#include "main.h"

/**
 * *strcat - concatenate strings
 * @dest: destination string
 * @src: source string
 *
 * Return: A pointer to the resultin string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i])
		i++;

	while (src[j])
	{
		for (; src[j]; i++)
		{
			dest[i] = src[j];
			j++;
		}
	}

	dest[i] = '\0';

	return (dest);
}
