#include "main.h"

/**
 * main - Where the program starts
 *
 * Return: return a 0 upon proper excution
 *
 * Descripton: prints out "_putchar"
 */

int main(void)
{
	char c[8] = "_putchar";

	int i;

	for (i = 0; i < 8 ; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');

	return (0);
}
