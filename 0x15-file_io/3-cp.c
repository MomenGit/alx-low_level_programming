#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define BUFSIZE (BUFSIZ / 8)

/**
 * close_files - ...
 *
 * @fd1: ...
 * @fd2: ...
 */
void close_files(int fd1, int fd2)
{
	if (close(fd1))
		dprintf(2, "%d", fd1);
	if (close(fd2))
		dprintf(2, "%d", fd2);
}

/**
 * write_to_file - ...
 *
 * @fd1: ...
 * @fd2: ...
 * @argv: ...
 */
void write_to_file(int fd1, int fd2, char **argv)
{
	char *buffer;
	ssize_t f1, f2;

	buffer = malloc(BUFSIZE);
	if (buffer == NULL)
		return;

	while (f1 > 0 && f2 != -1)
	{
		f1 = read(fd1, buffer, BUFSIZE);
		f2 = write(fd2, buffer, f1);
	}

	if (f1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close_files(fd1, fd2);
		exit(98);
	}
	if (f2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close_files(fd1, fd2);
		exit(99);
	}
	close_files(fd1, fd2);
}

/**
 * main - entry point to the program
 * copies file to another
 *
 * @argc: arguments count
 * @argv: arguments to the program
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		if (close(fd1))
			dprintf(2, "%d", fd1);
		exit(99);
	}
	write_to_file(fd1, fd2, argv);

	return (0);
}
