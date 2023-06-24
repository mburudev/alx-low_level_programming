#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file_desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t bytes_written = write(file_desc, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(file_desc);
			return (-1);
		}
	}
	close(file_desc);
	return (1);
}
