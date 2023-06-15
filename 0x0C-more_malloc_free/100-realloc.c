#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: size of allocated space for ptr
 * @new_size: size of enw memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *p;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (NULL);
		else
			return (p);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		*((char *)p + i) = *((char *)ptr + i);
	}

	free(ptr);

	return (p);
}
