#include "main.h"

/**
 * get_bit - Find the value of a bit at a given index.
 * @n: Decimal number.
 * @index: Index starting from 0 of the bit you want to get.
 *
 * Return: Value of the bit, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)  /* Assuming 32-bit architecture, change as needed */
		return (-1);

	return ((n >> index) & 1);
}

