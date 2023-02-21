#include"main.h"

/*
* Printing _putchar
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

