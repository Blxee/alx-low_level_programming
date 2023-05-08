#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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
	int f1_no, f2_no;
	char buf[BUF_SIZE];
	int chars_len;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	f1_no = open(argv[1], O_RDONLY);
	if (f1_no == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	f2_no = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f2_no == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		try_close(f1_no);
		return (99);
	}
	do {
		chars_len = read(f1_no, buf, BUF_SIZE);

		if (chars_len == -1)
			goto close_exit;
		chars_len = write(f2_no, buf, chars_len);
		if (chars_len == -1)
			goto close_exit;
		if (0)
		{
close_exit:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			try_close(f1_no);
			try_close(f2_no);
			return (99);
		}
	} while (chars_len == BUF_SIZE);
	return (0);
}
