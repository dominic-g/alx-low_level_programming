#include "main.h"

/**
* _isupper - Check if uppercase
*
* @c: Integer
*
* Description: checks is uppercase
*
* Return: either (1) or (0)
*/

int _isupper(int c)
{
	if(c >= 64 && c <= 90)
		return (1);
	else
		return (0);
}
