#include "main.h"

/**
 * set_bit - Set the value of a bit at a given index.
 * @n: Pointer to the decimal number.
 * @index: Index starting from 0 of the bit you want to set.
 *
 * Return: 1 if successful, or -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32) /* Assuming size of long int is 32 bits */
		return (-1);

	*n |= (1 << index);

	return (1);
}

