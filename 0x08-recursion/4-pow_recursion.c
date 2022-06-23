#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that returns the pow of x at y
 * @x: number
 * @y: number
 * Return: end of the function
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
