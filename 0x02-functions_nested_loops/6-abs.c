#include "main.h"

/**
 * _abs - print absolute value of an integer
 * @n: variable
 * Return: 0 succes
 */

int _abs(int n)
{

	if (n < 0)
	{
		int abs;

		abs = n * -1;
		return (abs);
	}
	return (n);

}
