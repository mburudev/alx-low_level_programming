#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc, char *argv[]) {
	char buffer[1024];
       int fd_from, fd_to;
ssize_t bytes_read;

  if (argc != 3) {
    fprintf(stderr, "Usage: cp file_from file_to\n");
    exit(97);
  }

  fd_from = open(argv[1], O_RDONLY);
  if (fd_from < 0) {
    fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
    exit(98);
  }

  fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
  if (fd_to < 0) {
    fprintf(stderr, "Error: Can't create file %s\n", argv[2]);
    exit(99);
  }



  
  while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0) {
    ssize_t bytes_written = write(fd_to, buffer, bytes_read);
    if (bytes_written < 0) {
      fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
      exit(99);
    }
  }

  if (bytes_read < 0) {
    fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
    exit(98);
  }

  if (close(fd_from) < 0) {
    fprintf(stderr, "Error: Can't close fd %d\n", fd_from);
    exit(100);
  }

  if (close(fd_to) < 0) {
    fprintf(stderr, "Error: Can't close fd %d\n", fd_to);
    exit(100);
  }

  return 0;
}
