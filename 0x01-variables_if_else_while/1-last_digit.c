#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Main Function
 *
 * Description: This program will assign a random number to the variable n
 * each time it is executed. 
 * Complete the source code in order to print the last digit of the number
 * stored in the variable n.
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10; 

	if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, digit);
	else if (digit < 6 && digit != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);

	return (0);
}
