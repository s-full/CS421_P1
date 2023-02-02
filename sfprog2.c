#include <stdio.h>

int main() {
	
	int arg1, arg2;
	
	printf("Please enter first parameter: ");
	scanf("%d", &arg1);
	printf("Please enter second parameter: ");
	scanf("%d", &arg2);
	int product = arg1 * arg2;
	
	printf("First parameter is %d\nSecond Parameter is %d\n", arg1, arg2);
	printf("Product is %d\n", product);
	
	return 0;
}
