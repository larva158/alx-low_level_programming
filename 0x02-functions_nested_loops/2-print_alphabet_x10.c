#include "main.h"
/**
 * print_alphabet_x10 - 10 times the alphabet, in lowercase
 *
 * return: always 0
*/

void print_alphabet_x10(void)
{
	int i = 0;
	int alphabet;

	while (i < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		i++;
		_putchar('\n');
	}
}
