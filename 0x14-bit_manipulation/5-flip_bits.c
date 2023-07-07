#include "main.h"

/**
 * flip_bits - check how many bits to flip to get a number from another
 * @n: number
 * @m: number
 * Return: bits difference
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int difference;

	difference = n ^ m;

	do {
		diff_bits += (difference & 1);
		difference >>= 1;
	} while
		(difference >0);

		return (diff_bits);
}
