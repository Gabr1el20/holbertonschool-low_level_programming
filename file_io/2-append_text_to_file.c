#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: name of the file
 * @text_content: Null terminated string
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, written, traveler = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	while (text_content[traveler])
	{
		traveler++;
	}

	written = write(file, text_content, traveler);
	if (written == -1)
		return (-1);

	close(file);

	return (1);
}
