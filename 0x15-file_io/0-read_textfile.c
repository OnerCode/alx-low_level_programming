#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: file being read
 * @letters: number of letters read
 * Return: w- actual number of bytes read and printed
 *	0 when filename is NULL or function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t f_op;
	ssize_t w;
	ssize_t t;

	f_op = open(filename, O_RDONLY);
	if (f_op == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(f_op, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(f_op);
	return (w);
}
