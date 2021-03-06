#include "main.h"
/**
 * create_file - Create a file.
 * @filename: file's name.
 * @text_content: file's content.
 * Return: 1 if success | -1 if fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
