#include <stdio.h>
/**
 * main -entry point
 * return: always (0) sucess
 * /
 
 int main(void)
 {
 	int a;
	long int b;
	char c;
	float f;
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
 }