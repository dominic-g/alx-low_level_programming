#include "main.h"
/**
 * is alphabets (lowercase and uppercase)
 *
 * Description: check the code.
 *
 * Return: Always 0 (Success)
*/
int _isalpha(int c)
{
	return ((c >= 98 && c <= 122) || (c >= 65 && c <= 90));
}

