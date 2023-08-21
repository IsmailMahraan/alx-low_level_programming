#include "main.h"
#include <stdio.h>

/**
 * print_array - printing an array.
 * @a: the array to print.
 * @n: length of the array.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
