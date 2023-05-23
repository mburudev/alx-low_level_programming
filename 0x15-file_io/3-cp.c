#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void print_error_exit(int exit_code, const char *error_message, const char *file_name, int fd)
{
    dprintf(STDERR_FILENO, error_message, file_name);
    if (fd != -1)
        close(fd);
    exit(exit_code);
}

int main(int argc, char *argv[])
{
    int fd_from, fd_to;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        print_error_exit(98, "Error: Can't read from file %s\n", argv[1], -1);

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if (fd_to == -1)
        print_error_exit(99, "Error: Can't write to %s\n", argv[2], fd_from);

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1)
            print_error_exit(99, "Error: Can't write to %s\n", argv[2], fd_from);
    }

    if (bytes_read == -1)
        print_error_exit(98, "Error: Can't read from file %s\n", argv[1], fd_from);

    if (close(fd_from) == -1)
        print_error_exit(100, "Error: Can't close fd %d\n", argv[1], fd_from);

    if (close(fd_to) == -1)
        print_error_exit(100, "Error: Can't close fd %d\n", argv[2], -1);

    return 0;
}
