#include "main.h"

/**
 * print_times_table - Advanced Times table
 *
 * @n: integer
 *
 * Description: check the code.
 *
 * Return: Always 0 (Success)
*/

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int row, column;

		for (row = 0; row <= n; ++row)
		{
			for (column = 0; column <= n; ++column)
			{
				additional(row, column, n);
			}

		}

	}
}

/**
 * additional - Advanced Times table
 *
 * @row: integer
 * @column: integer
 * @n: integer 
 *
 * Description: check the code.
 *
 * Return: Always 0 (Success)
*/
void additional (int row, int column, int n){
	int prd = row * column;
	int prd_ = row * column;
	
	if (column > 0)
	{
		if (prd >= 100)
		{
			_putchar(' ');
		}
		else if (prd >= 10)
		{
			_putchar(' ');
			_putchar(' ');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
	}

	if (prd >= 100)
	{
		_putchar((prd / 100) + 48);
		prd -= (prd / 100) * 100;
	}
	if (prd >= 10)
	{
		_putchar((prd / 10) + 48);
		prd -= (prd / 10) * 10;
	}
	else if (prd_ >= 100)
		_putchar(48);
	_putchar((prd + 48));
	if (column != n)
		_putchar(',');
	else
		_putchar('\n');
}

