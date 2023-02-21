#include "main.h"

/*
 * Times  Table
 *
 * Description - check the code.
 *
 * Return: Always 0 (Success)
*/
void times_table(void)
{
	int row , column;

	for(row = 0;row < 10; ++row){
		for(column = 0; column < 10; ++column){

			int prd = row * column;

			if(column > 0){
				if(prd < 10)
					_putchar(' ');
				_putchar(' ');
			}
			if(prd >= 10)	
				_putchar((prd / 10) + 48);
			_putchar((prd % 10) + 48);

			if(column > 8){
				_putchar('\n');
			}else{
				_putchar(',');
			}
		}
	}
}

