#include <stdio.h>


/**
 * closee - close a file  and print an error message upon failure.
 * @f: the file descriptor to close
 *
 * Return: 0 upon success, -1 upon failure
 */
int closee(int f)
{
	if (!close(f))
		return (0);
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
	return (-1);

}

/**
 * readfile - read from  file and print an error message.
 * @file: file name to read from.
 * @f: the file  to read from.
 * @buf: the buffer to write.
 * @l: the number of bytes to read
 *
 * Return: The number of bytes read, or -1.
 */
ssize_t readfile(const char *file, int f, char *buf, size_t l)
{
	ssize_t byte = read(f, buf, l);

	if (byte > -1)
		return (byte);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	return (-1);
}

/**
 * writefile - write to a file and print an error message  failure.
 * @file: file name to write to.
 * @f: the file  to write.
 * @buf: the buffer to read from.
 * @l: the number of bytes to write.
 *
 * Return: The number of bytes written, or -1.
 */
ssize_t writefile(const char *file, int f, const char *buf, size_t l)
{
	ssize_t bytes = write(f, buf, l);

	if (bytes > -1)
		return (bytes);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	return (-1);
}

/**
 * main - copy a file's contents to another file
 * @argc: the argument count
 * @argv: the argument values
 *
 * Return: Always 1
 */
int main(int argc, const char *argv[])
{
	int fin, fout;
	ssize_t bytestoread;
	char buff[buffer];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fin = open(argv[1], O_RDONLY);
	if (fin < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fout = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fout < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		closee(fin);
		exit(99);
	}
	while ((bytestoread = _read(argv[1], f_in, buff, buffer)))
	{
		if (bytestoread < 0)
		{
			closee(fin);
			closee(fout);
			exit(98);
		}
		if (_write(argv[2], f_out, buff, bytestoread) < 0)
		{
			closee(fin);
			closee(fout);
			exit(99);
		}
	}
	if ((closee(f_in) | closee(f_out)) < 0)
		exit(100);
	return (0);
}
