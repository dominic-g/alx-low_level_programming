#include "main.h"
/**
 * _isalpha - (lowercase and uppercase)
 *
 * @c: checks input of function
 *
 * Description: check the code.
 *
 * Return: Always 0 (Success)
*/
int _isalpha(int c)
{
	return ((c >= 98 && c <= 122) || (c >= 65 && c <= 90));
}

