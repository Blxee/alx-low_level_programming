#include "main.h"

/**
 * create_file - creates a file and writes to it
 *
 * @filename: the name of the new file
 * @text_content: the text to write to it
 *
 * Return:
 *	1 on success
 *	-1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_no;

	if (!filename)
		return (-1);

	file_no = open(filename, O_WRONLY | O_CREAT, 0600);
	if (file_no == -1)
		return (-1);

	if (text_content)
	{
		unsigned int len = 0;

		while (text_content[len])
			len++;
		if (write(file_no, text_content, len) == -1)
		{
			close(file_no);
			return (-1);
		}
	}

	close(file_no);
	return (1);
}
