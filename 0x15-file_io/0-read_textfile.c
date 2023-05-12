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
	ssize_t _read, _written;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	_read = read(fd, buf, letters);
	if (_read == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	_written = write(STDOUT_FILENO, buf, _read);
	if (_written == -1 || _written != _read)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (_written);
}
