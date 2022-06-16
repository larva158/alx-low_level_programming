#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 *
 * Return: always 0
 */
int main(void)
{
	int hex;

	for (hex = 0x0; hex < 0xF; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
