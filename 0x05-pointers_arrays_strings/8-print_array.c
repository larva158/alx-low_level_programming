#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *@a: pointer
 *@n: elements of an array
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	_putchar("\n");
}
