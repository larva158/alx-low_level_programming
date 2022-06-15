#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *@s: pointer
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;

	for (i = 0 ; s[i - 1]; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}
