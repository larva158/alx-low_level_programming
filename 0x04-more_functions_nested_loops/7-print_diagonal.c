#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *@n: is the number of times the character
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			if (i == 1)
			{
				_putchar('\\');
			}
			else
			{
				_putchar('\n');
				for (j = 1; j < i; j++)
				{
					_putchar(' ');
				}
				_putchar('\\');
			}
		}
	}
	_putchar('\n');
}
