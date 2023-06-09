#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - prints program's name
 * @argc: counts argument input
 * @argv: stores strings in an array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum, value;

	sum = 0;

	if (argc < 1)
	{
		printf("%d\n", 0);
	}

	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}

		value = atoi(argv[argc]);
		sum += value;
	}

	printf("%d\n", sum);
	return (0);
}
