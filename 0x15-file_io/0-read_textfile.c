#include "main.h"
/**
 * read_textfile - read a text file and prints it to the standard output.
 * @filename: name of the file to be read.
 * @letters: number of letters to read and print.
 * Return: the number of letters printed, or 0 if failed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int i, j;
	char *buffer;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	i = read(file, buffer, letters);
	if (i < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[i] = '\0';
	close(file);
	j = write(STDOUT_FILENO, buffer, i);
	if (j < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (j);
}
