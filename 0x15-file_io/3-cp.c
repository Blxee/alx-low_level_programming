#include <stdlib.h>
#include <stdio.h>
#include "main.h"

#ifdef BUF_SIZE
#undef BUF_SIZE
#endif /* !BUF_SIZE */
#define BUF_SIZE 1024

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
		exit(100);
	}
}

/**
 * open_files - opens the files to copy from and into
 *
 * @files: a pointer to strore file descriptors
 * @f1: name of the 1st file
 * @f2: name of the 2nd file
 */
void open_files(int *files, const char *f1, const char *f2)
{
	files[0] = open(f1, O_RDONLY);
	if (files[0] == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f1);
		exit(98);
	}
	files[1] = open(f2, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (files[1] == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f2);
		try_close(files[0]);
		exit(99);
	}
}

/**
 * main - copies one file into another
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return:
 *	0 on success
 *	97 if arguments are nor correct
 *	98 if file to be copied can't be read
 *	99 when can't write to copy
 *	100 if an fd can't be closed
 */
int main(int argc, char *argv[])
{
	int files[2];
	char buf[BUF_SIZE];
	int chars_len;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	open_files(files, argv[1], argv[2]);
	do {
		chars_len = read(files[0], buf, BUF_SIZE);
		if (chars_len == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			try_close(files[0]);
			try_close(files[1]);
			return (98);
		}
		chars_len = write(files[1], buf, chars_len);
		if (chars_len == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			try_close(files[0]);
			try_close(files[1]);
			return (99);
		}
	} while (chars_len == BUF_SIZE);

	try_close(files[0]);
	try_close(files[1]);
	return (0);
}
