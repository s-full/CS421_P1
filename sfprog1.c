#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char* argv[]) {
	//printf("hello, world!\n");
	//printf("%d", argc);
	
	int arg1 = atoi(argv[1]);
	int arg2 = atoi(argv[2]);
	int product = arg1 * arg2;
	printf("First parameter is %d\nSecond Parameter is %d\n", arg1, arg2);
	printf("Product is %d\n", product);
}
