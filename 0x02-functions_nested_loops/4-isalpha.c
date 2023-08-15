#include "main.h"

/**
 * _isalpha - check the code for ALX School students.
 *
 * @x: is an integer argument
 *
 * Return: Always 0.
 */

int _isalpha(int x)
{

	if (x >= 97 && x <= 122)
	{
		return (1);
	}
	else if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
