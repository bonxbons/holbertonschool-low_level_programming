#include "main.h"

/**
 * clear_bit - Clear the value of a bit at a given index.
 * @n: Pointer to the decimal number.
 * @index: Index starting from 0 of the bit you want to clear.
 *
 * Return: 1 if successful, or -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32) /* Assuming size of long int is 32 bits */
		return (-1);

	/* Clear the bit at the specified index */
	*n &= ~(1 << index);

	return (1);
}

