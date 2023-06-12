#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen: returns string length
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * argstostr - concatenates all arguments of the program
 * @ac: argc
 * @av: argv
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, len;

	len = 0;
	k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}

	s = malloc(len * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}

	return (s);
}
