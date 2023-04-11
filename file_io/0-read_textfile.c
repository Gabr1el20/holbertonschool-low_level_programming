#include "main.h"

/**
 * read_textfile - Reads a textfile and prints it to
 * the POSIX stdout.
 * @filename: name of the file
 * @letters: letters of the file
 *
 * Return:the printed content if it success, '0' otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedescriptor;
	char *buffer;
	ssize_t rd, written;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	filedescriptor = open(filename, O_RDONLY);
	if (filedescriptor == -1)
	{
		free(buffer);
		return (0);
	}
	rd = read(filedescriptor, buffer, letters);

	written = write(STDOUT_FILENO, buffer, rd);

	close(filedescriptor);

	return (written);
}
