#include"main.h"

/*
* Printing _putchar
*/
int main(){
	char txt[] = "_putchar";

	int i;

	for (i = 0; i < 8; ++i)
		printchar(txt[i]);

	printchar('\n');
	return 0;
}