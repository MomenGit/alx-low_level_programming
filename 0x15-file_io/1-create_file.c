#include "main.h"

/**
 * create_file - Create a file object
 *
 * @filename: ...
 * @text_content: ...
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len, _write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		_write = write(fd, text_content, len);
		if (_write != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
