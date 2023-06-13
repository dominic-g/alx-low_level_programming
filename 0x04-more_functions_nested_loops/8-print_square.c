#include"main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 * Description: Description
 *
 * Return: always (0)
*/

void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
