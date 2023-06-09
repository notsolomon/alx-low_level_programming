#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: numbers
 * Return: 0 (success)
 * 1 otherwise
 */

int main(int argc, char *argv[])
{
	it num1, num2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);
	return (0);
}
