#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 
*/

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
		_putchar('\n');
	}
}
