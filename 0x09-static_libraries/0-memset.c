#include "main.h"

/*
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the momery area
 * @b: Constant byte
 * @n: number of bytes to fill the memory
 *
 * Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
