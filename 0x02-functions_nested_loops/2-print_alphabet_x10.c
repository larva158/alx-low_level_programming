#include "main.h"

/**
 * print_alphabet_x10 - print 10x the alphabets
 *
 * Return: 0 succes
 */

void print_alphabet_x10(void)
{
	int i;
	char a;
	i = 0;

	while (i < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		i++;
		_putchar('\n');
	}
}
