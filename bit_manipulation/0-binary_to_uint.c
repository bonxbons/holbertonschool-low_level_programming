#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: String containing the binary number.
 *
 * Return: The decimal number, or 0 if invalid input or an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; ++i)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		decimal = 2 * decimal + (b[i] - '0');
	}

	return (decimal);
}

