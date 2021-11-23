#include "main.h"
/**
 * append_text_to_file - Copy a text at the end of the file.
 * @filename: Pointer to the file.
 * @text_content: Content to copy.
 * Return: 1 if success | -1 if fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1 || filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[len])
		len++;
	write(fd, text_content, len);
	close(fd);

	return (1);
}
