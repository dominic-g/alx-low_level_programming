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
    int fd = -1;
    ssize_t r = 0, w = 0;
    char *buffer = NULL;

    if (filename == NULL)
        return 0;

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
        return 0;

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("open");
        free(buffer);
        return 0;
    }

    r = read(fd, buffer, letters);
    if (r == -1) {
        perror("read");
        free(buffer);
        close(fd);
        return 0;
    }

    w = write(STDOUT_FILENO, buffer, r);
    if (w == -1) {
        perror("write");
        free(buffer);
        close(fd);
        return 0;
    }

    if (w != r) {
        fprintf(stderr, "write: incomplete write\n");
        free(buffer);
        close(fd);
        return 0;
    }

    free(buffer);
    close(fd);
    return w;
}
