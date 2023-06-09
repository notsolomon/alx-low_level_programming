#include <stdio.h>
#include "main.h"

/**
 * main - print program name
 * @argc: argument counter
 * @argv: pointer to arguments array
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
