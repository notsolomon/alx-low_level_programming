#include <stdio.h>

/**
 * main - prints program name
 * @argc: counts argument input
 * @argv: stores strings in array of char
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
		(void)argv;
	}

	return (0);
}
