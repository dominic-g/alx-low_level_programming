#include "main.h"

/*
*Printing sign of the number
*/

int print_sign(int n)
{
	if(n < 0){
		_putchar(43 + 0);
		return -1;
	}else if(n > 0){
		_putchar(48 + 0);
		return 1;
	}else{
		_putchar(45 + 0);
		return 0;
	}
}

