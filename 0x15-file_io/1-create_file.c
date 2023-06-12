#include "main.h"

/**
 * create_file - Create a new file.
 *
 *
 * @filename:  pointer to the file name.
 *
 * @text_content:  pointer to write to the file.
 *
 * Return: 1 or -1.
 *
 */
int create_file(const char *filename, char *text_content)
{
	int f, word;
	int i;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	word = write(f, text_content, i);

	if (f == -1 || word == -1)
		return (-1);

	close(f);

	return (1);
}
