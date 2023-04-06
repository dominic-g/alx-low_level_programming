#include "main.h"
#include <stdio.h>

/**
 * output_binary - output binary equivalent for a given number
 * @num: decimal number to print as binary
 */
void output_binary(unsigned long int num)
{
	unsigned long int tmp;
	int nf;

	if (num == 0)
	{
		printf("0");
		return;
	}

	for (tmp = num, nf = 0; (tmp >>= 1) > 0; nf++)
		;

	for (; nf >= 0; nf--)
	{
		if ((num >> nf) & 1)
			printf("1");
		else
			printf("0");
	}
}
