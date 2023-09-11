#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 succes
 */

int main(void)
{
	int a;

	for (a = 0; a <= 15; a++)
		printf("%x", a);
	putchar('\n');
	return (0);
}
