#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: NULL terminated string
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, traveler = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[traveler] != '\0')
	{
		traveler++;
	}
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	write(file, text_content, traveler);

	return (1);
}
