
#include<stdio.h>
/**
 * main - entry point
 *
 * sizeof operator is used to evaluate the size of a variable
 *
 * Return - always 0
 */
int main(void) {
	char(charType);
	int(intType);
	float(floatType);
	double(doubleType);
	
	printf("Size of char: %ld byte(s)\n",sizeof(charType));
	printf("Size of int: %ld byte(s)\n",sizeof(intType));
	printf("Size of float: %ld byte(s)\n",sizeof(floatType));
	printf("Size of double: %ld byte(s)\n",sizeof(doubleType));

	return(0);
}
