#include <stdio.h>
/*
*First 50 Fibonacci Numbers
*
*/
int main(){
	int first, second, i;

	first = 0; second = 0;

	i = 0;

	while(i < 50){
		int fib = first + second;
		printf("%d, ", fib);

		second = first;
		if(first == 0)
			first = 1;
		else
			first = fib;
		++i;
	}

	return 0;
}