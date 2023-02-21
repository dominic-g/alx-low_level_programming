#include <stdio.h>
/*
*Even Fibonacci Numbers
*
*/
int main(){
	int first, second, fib;

	first = 2; second = 1;

	fib = first + second;


	while(fib <= 4000000){
		fib = first + second;
		if((first % 2) == 0 && (second % 2) == 0)
			printf("%d\n", fib);

		second = first;

		first = fib;
	}

	return 0;
}