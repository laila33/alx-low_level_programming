#include "main.h"

/**
 * read_textfile- Read  file .
 *
 * @filename: text file .
 *
 * @letters: letters to be read.
 *
 * Return: number of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t word;
	char  buf[buffer * 8];


	if (filename == NULL || letters == NULL)
		return (0);

	f =  open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	word = read(f, &buf[0], letters);
	word = write(STDOUT_FILENO, &buf[0], word);
	close(f);


	return (word);

}
