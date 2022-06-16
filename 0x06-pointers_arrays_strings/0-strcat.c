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
	char s1[50], s2[50];

	strcpy(s1,  "Hello ");
	strcpy(s2, "World!\n");
	_strcat(dest, src);
	_putchar(dest);

	return (dest);
}
