#include <stdio.h>
#include <stdlib.h>

int main() {
	
	FILE * myFile;
	myFile = fopen("inputfile","r");
	
	int arg1, arg2;
	
	printf("Reading first parameter: ");
	
	fscanf(myFile, "%d", &arg1);
	printf("%d\n", arg1);
	
	printf("Reading second parameter: ");
	
	fscanf(myFile, "%d", &arg2);
	printf("%d\n", arg2);
	
	int product = arg1 * arg2;
	
	printf("Product is %d\n", product);
	fclose(myFile);
	
	return 0;
}
