#include "main.h"

/**
 * _isalpha - check to alphabetic character
 * @c: variable
 * Return: 0 succes
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
