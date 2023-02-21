#include <stdio.h>
/**
 * main - check the code.
 *
 * Description: prints fibonnaci
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	long first, second, i;

	first = 2;
	second = 1;

	i = 0;

	printf("%ld, %ld, ", second, first);
	while (i < 48)
	{
		long fib = first + second;

		printf("%ld", fib);


		if (i < 47)
			printf(", ");

		second = first;
		first = fib;
		++i;
	}
	printf("\n");

	return (0);
}

