#include "main.h"

/**
 * print_sign - code
 *
 * @n: checks input of function
 * Description: check the code.
 *
 * Return: Always 0 (Success)
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar (43 + 0);
		return (-1);
	} else if (n > 0)
	{
		_putchar (48 + 0);
		return (1);
	} else
	{
		_putchar (45 + 0);
		return (0);
	}
}

