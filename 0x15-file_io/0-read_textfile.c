#include "main.h"
/**
 * read_textfile - read and print the buffer.
 * @filename: Pointer to the text.
 * @letters: size of the buffer.
 * Return: the count of the chars.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;/* File descriptor */
	int index;
	char buf[1024];
	ssize_t num_bytes;

	fd = open(filename, O_RDONLY);

	if (fd == -1 || filename == NULL)
		return (0);

	num_bytes = read(fd, buf, letters);
	close(fd);
	if (num_bytes == 0)
		return (0);
	for (index = 0; buf[index] != '\0'; index++)
	{
		_putchar(buf[index]);
	}
	return (num_bytes);
}
