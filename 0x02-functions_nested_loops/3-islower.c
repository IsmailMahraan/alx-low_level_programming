#include "main.h"

/**
 *_islower - checks for a lowercase character
 *@x: letter being tested
 * Return: Always 0
 */

int _islower(int x)
{

	if (x >= 97 && x <= 122)
		return (1);
	else
		return (0);
}
