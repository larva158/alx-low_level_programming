#include "main.h"

/**
 * puts_half - prints half of a string
 *@str: pointer
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i, lt;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	lt = (i + 1) / 2;

	for (i = lt; str[i]; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
