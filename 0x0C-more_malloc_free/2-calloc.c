#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory and sets values to 0
 * @nmemb: size
 * @size: sizeof datatype
 *
 * Return: pointer to calloc string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
