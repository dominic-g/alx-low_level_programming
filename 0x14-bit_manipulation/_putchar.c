#include <unistd.h>

/**
 * _putchar - output the char c to standard output
 * @w: Character to writeout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char w)
{
	return (write(1, &w, 1));
}
