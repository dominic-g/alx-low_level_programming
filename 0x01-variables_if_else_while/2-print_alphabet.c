#include <stdio.h>

/**
 * main - MAin Function
 *
 * Description: program that prints the alphabet in lowercase, then a new line.
 *
 * Return: Always 0 (Pass)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
