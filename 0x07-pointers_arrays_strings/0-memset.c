#include <stdio.h>
#include <string.h>

/**
 *_memset - function that fills n bytes to the pointer *s with constant b
 * @n: unsigned int
 * @s: pointer
 * @b: char
 * return: return _memset function
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	_putchar(s);

	return (_memset);
}
