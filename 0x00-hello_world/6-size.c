#include<stdio.h>

/**
 * main- Entry point
 *
 *Return: 0 success
 */

int main(void)
{
	int a;
	float b;
	long int c;
	long long int d;
	char e;

	printf("Size of a char: %lu byte(s)\n", sizeof(e));
	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(b));

	return (0);
}
