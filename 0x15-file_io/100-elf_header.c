#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdint.h>

#define EI_NIDENT 16

/**
 * struct Elf64_Ehdr - ELF header structure
 *
 * @e_ident:       ELF identification field
 * @e_type:        Object file type
 * @e_machine:     Architecture
 * @e_version:     Object file version
 * @e_entry:       Entry point virtual address
 * @e_phoff:       Program header table file offset
 * @e_shoff:       Section header table file offset
 * @e_flags:       Processor-specific flags
 * @e_ehsize:      ELF header size in bytes
 * @e_phentsize:   Program header table entry size
 * @e_phnum:       Program header table entry count
 * @e_shentsize:   Section header table entry size
 * @e_shnum:       Section header table entry count
 * @e_shstrndx:    Section header string table index
 */
typedef struct
{
  unsigned char e_ident[EI_NIDENT];
  uint16_t e_type;
  uint16_t e_machine;
  uint32_t e_version;
  uint64_t e_entry;
  uint64_t e_phoff;
  uint64_t e_shoff;
  uint32_t e_flags;
  uint16_t e_ehsize;
  uint16_t e_phentsize;
  uint16_t e_phnum;
  uint16_t e_shentsize;
  uint16_t e_shnum;
  uint16_t e_shstrndx;
} Elf64_Ehdr;

/**
 * main - Entry point of the program
 * @argc: The argument count
 * @argv: Array of pointers to the program arguments
 *
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr elf_header;
	int fd;
  if (argc != 2)
  {
    fprintf(stderr, "Usage: elf_header elf_filename\n");
    exit(97);
  }

  fd = open(argv[1], O_RDONLY);
  if (fd < 0)
  {
    fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
    exit(98);
  }

  /* Seek to the start of the ELF header */
  if (lseek(fd, 0, SEEK_SET) < 0)
  {
    fprintf(stderr, "Error: Can't seek to start of file %s\n", argv[1]);
    exit(98);
  }

  /* Read the ELF header */
  
  if (read(fd, &elf_header, sizeof(elf_header)) < 0)
  {
    fprintf(stderr, "Error: Can't read ELF header from file %s\n", argv[1]);
    exit(98);
  }

  /* Print the information contained in the ELF header */
  printf("Magic: %02x %02x %02x %02x\n",
         elf_header.e_ident[0], elf_header.e_ident[1],
         elf_header.e_ident[2], elf_header.e_ident[3]);
  printf("Class: %d\n", elf_header.e_ident[4]);
  printf("Data: %d\n", elf_header.e_ident[5]);
  printf("Version: %d\n", elf_header.e_version);
  printf("OS/ABI: %d\n", elf_header.e_ident[7]);
  printf("ABI Version: %d\n", elf_header.e_ident[8]);
  printf("Type: %d\n", elf_header.e_type);
  printf("Entry point address: %p\n", (void *)(uintptr_t)elf_header.e_entry);

  if (close(fd) < 0)
  {
    fprintf(stderr, "Error: Can't close fd %d\n", fd);
    exit(100);
  }

  return 0;
}
