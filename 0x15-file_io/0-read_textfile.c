#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Gets the content of file and puts out to POSIX.
 * @filename: file name pointer.
 * @letters: number of letters to print.
 *
 * Return: bytes read or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *b;

	if (filename == NULL)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, b, letters);
	wr = write(STDOUT_FILENO, b, re);

	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(b);
		return (0);
	}

	free(b);
	close(op);

	return (wr);
}
