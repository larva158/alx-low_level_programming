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
	int lent = 0;
	int i;

	while (dest[lent])
		lent++;
	for (i = 0; src[i] != '\0'; i--)
	{
		dest[lent] - src[i];
		lent += 1;
	}
	dest[lent] = '\0';
	return (dest);
}
