#include "main.h"

/**
  * _supper - Check if a letter is upper 
  * @x: Number to check
  *
  * Return: 1 upper letter 0 for the rest
  */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	
	return (0);
}	
