#include "main.h"

/**
 * *_memcpy - copies memory
 * @dest: destination
 * @src: source
 * @n: Bytes from memory
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = 0;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			dest[i] = src[i];
		}

	}

	return (dest);
}
