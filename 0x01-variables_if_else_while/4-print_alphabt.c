#include<stdio.h>

/**
 * main - Main Function
 *
 * Description: prints the alphabet in lowercase,
 * followed by a new line except q and e
 *
 * Return: Always 0 (Pass)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			++ch;
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
