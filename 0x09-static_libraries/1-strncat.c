#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: parameter
 * @src: parameter
 * @n: bytes from src
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, const char *src, long unsigned int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];

		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
