#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 *
 * Return: ...
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	o = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(o) == NULL || o[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*o == '/' && b == 0) ||
	    (*o == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(o)(a, b));

	return (0);
}
