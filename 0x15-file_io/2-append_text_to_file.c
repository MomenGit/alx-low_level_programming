#include "main.h"

/**
 * append_text_to_file - das
 *
 * @filename: ...
 * @text_content: ...
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len, _write;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	_write = write(fd, text_content, len);
	if (_write != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
