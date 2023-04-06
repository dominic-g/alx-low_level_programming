#include "main.h"

/**
 * set_bit - set bit in index
 * @num: the number to change
 * @i: index to be changed
 * Return: -1 if not and 1 if success
 */
int set_bit(unsigned long int *num, unsigned int i)
{
	unsigned long int pu;

	if (i > 64)
		return (-1);

	for (pu = 1; i > 0; i--, pu *= 2)
		;
	*num += pu;

	return (1);
}
