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
	char dest[7];
	char src[7];

	strcpy(src, "Hello ");
	strcpy(dest, "World!\n");
	while (strcat(dest, src))
	{
		dest[7] = src + '\0';
	}
	_putchar(dest);
}
