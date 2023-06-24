#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads text file and prints it to the POSIX standard output
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed,
 *         0 if the file cannot be opened or read,
 *         0 if filename is NULL,
 *         0 if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	y = read(x, buffer, letters);
	z = write(STDOUT_FILENO, buffer, y);

	if (x == -1 || y == -1 || z == -1 || z != y)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(x);

	return (y);
}
