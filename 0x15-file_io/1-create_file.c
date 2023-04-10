#include "main.h"

/**
 * create_file - Makes new file.
 * @filename: file name pointer to create.
 * @text_content: string pointer to input into file.
 *
 * Return: Sucess 1 or Fail -1.
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, length);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
