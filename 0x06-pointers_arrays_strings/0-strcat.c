#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenates two strings
 *@dest: pointer
 *@src: pointer
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	char dest[98] = "Hello ";
	char src[] = "World!\n";

	strcat(dest, src);
	_putchar(dest);
}
