#include "main.h"

/**
 * append_text_to_file - Appends text.
 *
 * @filename:  pointer to file name.
 *
 *
 * @text_content: written text.
 *
 * Return: 1 or -1.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n, letter, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	n = open(filename, O_WRONLY | O_APPEND);
	letter = write(n, text_content, i);

	if (n == -1 || letter == -1)
		return (-1);

	close(n);

	return (1);
}
