#include "main.h"

/**
 * swap_int - swap the value of two integers.
 *
 * @a: First integer.
 * @b: Second integer.
 *
 */

void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
