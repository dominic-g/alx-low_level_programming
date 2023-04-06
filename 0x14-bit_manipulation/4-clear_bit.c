#include "main.h"
#include <stdio.h>
/**
 * clear_bit - clear the position from the index to zero
 * @num: decimal number pointer too chnage
 * @i: pos to change index
 * Return: -1 if fails and 1 if success
 */
int clear_bit(unsigned long int *num, unsigned int i)
{
	unsigned long int ij;
	unsigned int h;

	if (i > 64)
		return (-1);
	h = i;
	for (ij = 1; h > 0; ij *= 2, h--)
		;

	if ((*n >> i) & 1)
		*n -= ij;

	return (1);
}
