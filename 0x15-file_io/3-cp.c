#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * make_buffer - define 1024 bytes for  buffer.
 * @ff: file buffer name  storing chars for.
 *
 * Return: new buffer allocated.
 */
char *make_buffer(char *ff)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", ff);
		exit(99);
	}

	return (buff);
}

/**
 * closefile - Closes file .
 * @fn: The file to be closed.
 */
void closefile(int fn)
{
	int i;

	i = close(fn);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fn);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments.
 * @argv: arguments values.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int x, y, s, not;
	char *get;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	get = make_buffer(argv[2]);
	x = open(argv[1], O_RDONLY);
	s = read(x, get, 1024);
	y = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (x == -1 || s == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(get);
			exit(98);
		}

		not = write(y, get, s);
		if (y == -1 || not == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(get);
			exit(99);
		}

		s = read(x, get, 1024);
		y = open(argv[2], O_WRONLY | O_APPEND);

	} while (s > 0);

	free(get);
	closefile(x);
	closefile(y);
	return (0);
}
