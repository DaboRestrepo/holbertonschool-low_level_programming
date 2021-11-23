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
	/*int index;*/
	char buf[1024];
	ssize_t num_bytes;

	fd = open(filename, O_RDONLY);

	if (fd == -1 || filename == NULL)
		return (0);

	num_bytes = read(fd, buf, letters);
	write(fd, buf, letters);
	close(fd);
	if (num_bytes == 0 || letters != (size_t)num_bytes)
		return (0);
	return (num_bytes);
}
