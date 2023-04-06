#include "main.h"
#include <stdio.h>
/**
 * get_bit - return the bit at a index
 * @num: number to check
 * @i: index to get bit from number
 * Return: the bit at index or -1 if none
 */
int get_bit(unsigned long int num, unsigned int i)
{
	unsigned long int h;

	if (i > 64)
		return (-1);

	h = num >> i;

	return (h & 1);
}
