#include <stdio.h>
#include <stdlib.h>

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
	FILE *file;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, file);

	if (bytes_read <= 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	buffer[bytes_read] = '\0';

	bytes_written = fwrite(buffer, sizeof(char), bytes_read, stdout);
	free(buffer);
	fclose(file);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
