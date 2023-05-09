#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>

/**
 * is_elf_file - determines whether the file is elf format
 *
 * @ident: elf identifier
 *
 * Return: 1 if true, 0 if not
 */
int is_elf_file(unsigned char *ident)
{
	char elf_id[] = " ELF";
	unsigned int i;

	elf_id[0] = '\x7f';
	for (i = 0; i < 4; i++)
		if (ident[i] != elf_id[i])
			return (0);
	return (1);
}

/**
 * show_magic - prints info
 *
 * @ident: elf identifier
 */
void show_magic(unsigned char *ident)
{
	unsigned int i;

	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
		if (i == 15)
			printf("%02x\n", ident[i]);
		else
			printf("%02x ", ident[i]);
}

/**
 * show_class - prints info
 *
 * @ident: elf identifier
 */
void show_class(unsigned char *ident)
{
	printf("  Class:                             ");

}

/**
 * show_data - prints info
 *
 * @ident: elf identifier
 */
void show_data(unsigned char *ident)
{
	printf("  Data:                              ");

}

/**
 * show_version - prints info
 *
 * @ident: elf identifier
 */
void show_version(unsigned char *ident)
{
	printf("  Version:                           ");

}

/**
 * show_OS_ABI - prints info
 *
 * @ident: elf identifier
 */
void show_OS_ABI(unsigned char *ident)
{
	printf("  OS/ABI:                            ");

}

/**
 * show_ABI_version - prints info
 *
 * @ident: elf identifier
 */
void show_ABI_version(unsigned char *ident)
{
	printf("  ABI Version:                       ");
	printf("%d\n", ident[EI_ABIVERSION]);
}

/**
 * show_type - prints info
 *
 * @ident: elf identifier
 */
void show_type(unsigned char *ident)
{
	printf("  Type:                              ");

}

/**
 * show_entry_address - prints info
 *
 * @ident: elf identifier
 */
void show_entry_address(unsigned char *ident)
{
	printf("  Entry point address:               ");
}

/**
 * print_info - prints all the info to stdout
 *
 * @ident: elf identifier
 */
void print_info(unsigned char *ident)
{
	show_magic(ident);
	show_class(ident);
	show_data(ident);
	show_version(ident);
	show_OS_ABI(ident);
	show_ABI_version(ident);
	show_type(ident);
	show_entry_address(ident);
}

/**
 * try_close - tries to close a file descriptor
 *
 * @fd: the file descriptor number
 */
void try_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(98);
	}
}

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr *parsed_header;
	int fd;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "error\n");
		return (98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "error\n");
		return (98);
	}
	parsed_header = malloc(sizeof(*parsed_header));
	if (!parsed_header)
	{
		dprintf(STDERR_FILENO, "error\n");
		try_close(fd);
		return (98);
	}
	if (read(fd, parsed_header, sizeof(*parsed_header)) == -1)
	{
		dprintf(STDERR_FILENO, "error\n");
		try_close(fd);
		free(parsed_header);
		return (98);
	}
	if (!is_elf_file(parsed_header->e_ident))
	{
		dprintf(STDERR_FILENO, "error\n");
		try_close(fd);
		free(parsed_header);
		return (98);
	}
	print_info(parsed_header->e_ident);
	try_close(fd);
	free(parsed_header);
	return (0);
}
