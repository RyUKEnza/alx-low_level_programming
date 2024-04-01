#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define ELF_MAGIC_SIZE 16

/**
 * main - Displays information contained in the ELF header of a file
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 on success, otherwise exit with error code
 */
int main(int argc, char **argv)
{
	int fd, read_count, i;
	char elf_magic[ELF_MAGIC_SIZE];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file '%s'\n", argv[1]);
		exit(98);
	}

	read_count = read(fd, elf_magic, ELF_MAGIC_SIZE);
	if (read_count != ELF_MAGIC_SIZE || elf_magic[0] != 0x7f || elf_magic[1] != 'E' || elf_magic[2] != 'L' || elf_magic[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		close(fd);
		exit(98);
	}

	lseek(fd, 0, SEEK_SET);

	printf("ELF Header:\n");

	printf("  Magic:   ");
	for (i = 0; i < ELF_MAGIC_SIZE; i++)
		printf("%02x ", elf_magic[i] & 0xff);
	printf("\n");

	close(fd);
	return (0);
}
