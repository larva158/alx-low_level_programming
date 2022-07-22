#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function returning pointer and copy string given as a parameter
 *@str: string to copy
 *@s:newly allocated space
 */
char *_strdup(char *str)
{
	char *s;

	str = "ALX SE";
	s = malloc(sizeof(*s) * 9);
	s = strdup(str);
	if (s == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	printf("%s\n",s);
	free(s);
	return (0);
}
