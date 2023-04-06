#include "main.h"

/**
 * get_endianness - look for big or little endian
 * Return: 0,1 in false and true
 */
int get_endianness(void)
{
	int n;

	n = 1;
	if (*(char *)&n == 1)
		return (1);
	else
		return (0);
}

