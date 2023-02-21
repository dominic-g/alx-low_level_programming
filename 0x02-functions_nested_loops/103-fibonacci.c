#include <stdio.h>
/**
 * main - Even Fibonacci Numbers
 *
 * Description: prints fibonacci numbers below 4m
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int first, second, fib;

	first = 2; second = 1;

	fib = first + second;


	printf ("%d\n%d\n", second, first);
	while (fib <= 4000000)
	{
		fib = first + second;
		if ((first % 2) == 0 && (second % 2) == 0)
			printf("%d\n", fib);

		second = first;

		first = fib;
	}

	return (0);
}

