#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails or filename is NULL, -1.
 *         If the file does not exist the user lacks write permissions ,-1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);
	bytes_written = write(file_descriptor, text_content, strlen(text_content));
	close(file_descriptor);

	if (bytes_written == -1)
		return (-1);
	return (1);
}
