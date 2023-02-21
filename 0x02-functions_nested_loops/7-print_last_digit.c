#include "main.h"

/*
*Print the lastDigit
*/
int print_last_digit(int i){
	int lastDigit;

	if (i < 0)
		lastDigit = -1 * (i % 10);
	else
		lastDigit = i % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}