#include <stdio.h>

int f1(int x) {
	int z = 10;
	return x + z;
}

void f2(void) {
	char array[10];
	gets(array);
	printf("%s\n", array);
}

int main(int argc, char *argv[]) {
	//storage variable for result from f1.
	int n = 0;
	printf("In main. Calling f1 with 15 as a param.\n");
	n = f1(15);
	printf("Back in main from f1. Printing result.\n");
	printf("Result of f1(15) is %d.\n", n);
	printf("Still in main, calling f2\n");
	f2();
	printf("Back in main. Exiting with 0 because I assume everything went okay.\n");
	return 0;
}