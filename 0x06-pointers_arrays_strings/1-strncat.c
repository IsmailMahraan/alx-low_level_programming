#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 * @src: string
 * @dest: result.
 * @n: number.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(res);
	int j = 0;

	while (j < n && *src)
	{
		dest[index + j] = *src;
		src++;
		j++;
	}
	dest[index + j] = '\0';
	return (dest);
}
