#include <stdio.h>
/*
*First 98 Fibonacci Numbers
*
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

