#include "main.h"

/**
 * print_alphabet - print alphabets
 *
 * Return: 0 succes
 */

void print_alphabet(void)
{
	char a;

	for (a = 97; a <= 122; a++)
		_putchar(a);
	_putchar('\n');
}
