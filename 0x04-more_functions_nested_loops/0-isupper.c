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

	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
