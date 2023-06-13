#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @n: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *n)
{
	unsigned int ttl, pow;
	int len;

	if (n == NULL)
		return (0);

	for (len = 0; n[len]; len++)
	{
		if (n[len] != '0' && n[len] != '1')
			return (0);
	}

	for (pow = 1, ttl = 0, len--; len >= 0; len--, pow *= 2)
	{
		if (n[len] == '1')
			ttl += pow;
	}

	return (ttl);
}
