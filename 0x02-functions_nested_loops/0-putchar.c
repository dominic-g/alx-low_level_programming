#include"main.h"

/*
 * main - Printing _putchar
 *
 * Description: check the code.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char txt[] = "_putchar";

	int i;

	for (i = 0; i < 8; ++i)
		_putchar(txt[i]);

	_putchar('\n');
	return (0);
}

