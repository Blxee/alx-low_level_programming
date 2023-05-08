#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a file and prints it to stdout
 *
 * @filename: a string containing a valid file path
 * @letters: amount of letters to read and print
 *
 * Return:
 *	amount of chars printed (on success)
 *	0 elsewise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int file_no;
	ssize_t chars_read, chars_written;

	buf = malloc(letters * sizeof(char));

	if (!filename || !letters || !buf)
		return (0);

	file_no = open(filename, O_RDONLY);
	if (file_no == -1)
		return (0);

	chars_read = read(file_no, buf, letters);
	if (chars_read == -1)
	{
		close(file_no);
		return (0);
	}

	chars_written = write(STDOUT_FILENO, buf, chars_read);
	if (chars_written != chars_read)
	{
		close(file_no);
		return (0);
	}

	close(file_no);
	return (chars_read);
}
