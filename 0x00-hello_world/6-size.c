#!/bin/bash

#include<stdio.h>
/**
 * main - entry point
 *
 * sizeof operator is used to evaluate the size of a variable
 *
 * Return - always 0
 */
int main(void) {
	int integerType;
	float floatType;
	double doubletype;
	char chartype;
	
	printf("Size of int: %ld byte\n",sizeof(integerType));
	printf("Size of float: %ld byte\n",sizeof(floatType));
	printf("Size of double: %ld byte\n",sizeof(doubleType));
	printf("Size of char: %ld byte\n",sizeof(charType));

	return(0);
}
