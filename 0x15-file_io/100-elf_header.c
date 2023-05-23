#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "Usage: elf_header elf_filename\n");
    exit(97);
  }

  int fd = open(argv[1], O_RDONLY);
  if (fd < 0) {
    fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
    exit(98);
  }

  // Seek to the start of the ELF header.
  if (lseek(fd, 0, SEEK_SET) < 0) {
    fprintf(stderr, "Error: Can't seek to start of file %s\n", argv[1]);
    exit(98);
  }

  // Read the ELF header.
  struct elf_header elf_header;
  if (read(fd, &elf_header, sizeof(elf_header)) < 0) {
    fprintf(stderr, "Error: Can't read ELF header from file %s\n", argv[1]);
    exit(98);
  }

  // Print the information contained in the ELF header.
  printf("Magic: %08x\n", elf_header.e_ident[EI_MAG0]);
  printf("Class: %d\n", elf_header.e_ident[EI_CLASS]);
  printf("Data: %d\n", elf_header.e_ident[EI_DATA]);
  printf("Version: %d\n", elf_header.e_version);
  printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
  printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
  printf("Type: %d\n", elf_header.e_type);
  printf("Entry point address: %p\n", (void *)elf_header.e_entry);

  if (close(fd) < 0) {
    fprintf(stderr, "Error: Can't close fd %d\n", fd);
    exit(100);
  }

  return 0;
}

