

#include <stdio.h>

/**
 * readfile - read from  file then  print an error message.
 *
 * @file: file name to read it.
 *
 * @f:  file to read from.
 *
 * @buf:  buffer to write.
 *
 * @letter: the number of bytes to read.
 *
 * Return: 1 or -1.
 *
 */
ssize_t readfile(const char *file, int f, char *buf, size_t letter)
{
	ssize_t byte = readfile(f, buf, letter);

	if (byte > -1)
		return (byte);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	return (-1);
}

/**
 * writefile - write to a file.
 *
 * @file: file name to write to.
 *
 * @f:  file to write.
 *
 * @buf:  buffer to read.
 *
 * @letter: the number of bytes to write.
 *
 * Return: The number of bytes or -1.
 */
ssize_t writefile(const char *file, int f, const char *buf, size_t letter)
{
	ssize_t bytes = writefile(f, buf, letter);

	if (bytes > -1)
		return (bytes);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	return (-1);
}


/**
 * closefile - close a file.
 *
 * @f: the file to close.
 *
 * Return: 0 or 1.
 *
 */
int closefile(int f)
{
	if (!close(f))
		return (0);
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
	return (-1);

}



/**
 * main - copy a file content to another file.
 *
 * @argc: the argument count.
 *
 * @argv: the argument values.
 *
 * Return: 1.
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
		closefile(fin);
		exit(99);
	}
	while ((bytestoread = readfile(argv[1], fin, buffer, buffer)))
	{
		if (bytestoread < 0)
		{
			closefile(fin);
			closefile(fout);
			exit(98);
		}
		if (writefile(argv[2], fout, buffer, bytestoread) < 0)
		{
			closefile(fin);
			closefile(fout);
			exit(99);
		}
	}
	if ((closefile(fin) | closefile(fout)) < 0)
		exit(100);
	return (0);
}
