#include "main.h"

/**
 * main - copies the content of a file to another.
 * @argc: number of arguments passed to program.
 * @argv: array of arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int file_r, file_w, x, y, z;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_r = open(argv[1], O_RDONLY);
	if (file_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(file_r, buf, BUFSIZ)) > 0)
	{
		if (file_w < 0 || write(file_w, buf, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_r);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	y = close(file_r);
	z = close(file_w);
	if (y < 0 || z < 0)
	{
		if (y < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_r);
		if (z < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_w);
		exit(100);
	}
	return (0);
}
