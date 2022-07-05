#include <stdio.h>
#include "main.h"

/**
 * create_array - function that create array of char
 * @size: size of the buffer
 *@c: char to initialize
 * Return: Returns NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	int i;

	c = malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		buffer[i] = c;
	return (c);
}
