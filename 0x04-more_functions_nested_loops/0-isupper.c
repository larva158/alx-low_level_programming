#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
*/

int main(void)
{
	char c;

	if (isalpha(c))
	{
		c = toupper(c);
		return (1);
	}
	else
	{
		return (0);
	}
}
