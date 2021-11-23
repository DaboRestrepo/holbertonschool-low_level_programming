#include "main.h"
/**
 * read_textfile - read and print the buffer.
 * @filename: Pointer to the text.
 * @letters: size of the buffer.
 * Return: the count of the chars.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t num_bytes, res;

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL || filename == NULL)
	{
		free(buf);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	num_bytes = read(fd, buf, letters);
	res = write(STDOUT_FILENO, buf, num_bytes);
	close(fd);
	free(buf);

	return (res);
}
