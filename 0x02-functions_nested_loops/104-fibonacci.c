#include <stdio.h>
/*
 * main - First 98 Fibonacci Numbers
 *
 * Description: prints 98 fibonacci numbers
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int first, second, i;

	first = 2; second = 1;

	i = 0;

	printf("%d, %d, ",second, first);
	while(i < 96){
		int fib = first + second;
		printf("%d", fib);

		if(i < 95)
			printf(", ");

		second = first;
		first = fib;

		++i;
	}

	return 0;
}

