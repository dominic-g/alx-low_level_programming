#include<stdio.h>

/**
 * main - Main Function
 *
 * Description: program that prints the lowercase alphabet
 * in reverse, followed by a new line
 *
 * Return: Always 0 (Pass)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');

	return (0);
}
