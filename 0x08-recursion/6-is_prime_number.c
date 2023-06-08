#include "main.h"

/**
 * is_prime - divides by higher divisor
 * @n: integer
 * @divisor: integer
 *
 * Return: 1 when numbe is prime
 * 0 otherwise
 */

int is_prime(int n, int divisor)
{
	if (n == divisor)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime(n, divisor + 1));
}

/**
 * is_prime_number - checks if number is prime
 * @n: int
 *
 * Return: 1 when n is prime
 * 0 otherwise
 */

int is_prime_number(int n)
{
	if ((n < 2) || (n % 2 == 0))
		return (0);

	if (n == 2)
		return (1);

	return (is_prime(n, 3));
}
