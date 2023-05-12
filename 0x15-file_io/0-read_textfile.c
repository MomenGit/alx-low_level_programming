#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: ...
 * @letters: ...
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t _read, written;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	buf = malloc(letters);
	if (buf == NULL || fd < 0)
		return (0);

	_read = read(fd, buf, letters);
	if (_read < 0)
		return (0);
	written = write(STDOUT_FILENO, buf, letters);
	if (written < 0)
		return (0);
	close(fd);

	return ((_read < written) ? _read : written);
}
