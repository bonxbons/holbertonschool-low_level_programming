#include "main.h"

/**
 * flip_bits - Find the number of bits needed to flip
 *             to transform one number into another.
 *
 * @n: The first number.
 * @m: The second number (destination).
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num_flips = 0;

	while (n)
	{
		if ((n & 1) != (m & 1)) /* Check if corresponding bits are not the same */
			num_flips++;
		n = n >> 1;
		m = m >> 1;
	}

	return (num_flips);
}

