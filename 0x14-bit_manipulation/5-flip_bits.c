#include "main.h"
#include <stdio.h>

/**
 * flip_bits - convert bits from one num to another num
 * @num: number
 * @mun: another number
 * Return: bits number
 */
unsigned int flip_bits(unsigned long int num, unsigned long int mun)
{
	unsigned long int d;
	int c;

	d = num ^ mun;
	c = 0;

	while (d)
	{
		c++;
		d &= (d - 1);
	}

	return (c);
}

