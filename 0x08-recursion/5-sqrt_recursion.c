#include "main.h"

/**
 * sqr_root - Fidn sqr root of n
 * @n: number
 * @root: number
 * Return: Natural sqrt
 */

int sqr_root(int n, int root)
{
	if (root * root < n)
		return (-1);
	if (root * root == n)
		return (root);

	return (sqr_root(n, root + 1));
}

/**
 * _sqrt_recursion - returns natural sqr root of a number
 * @n: int
 *
 * Return: sqr root of n
 */

int _sqr_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqr_root(n, 0));
}
