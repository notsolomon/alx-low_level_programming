#include "main.h"

/**
 * _sqrt_recursion - calculates natural square root of a number
 * @n: number
 *
 * Return: natural squareroot of n
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (_pow_recursion(x, (y - 1)) * x);
}
