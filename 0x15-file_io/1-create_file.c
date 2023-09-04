#include "main.h"

/**
 * create_file - Creates a text file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int f_op, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	f_op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(f_op, text_content, len);

	if (f_op == -1 || w == -1)
		return (-1);

	close(f_op);

	return (1);
}
