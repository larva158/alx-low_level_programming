#include <stdio.h>
#include <stdlib.h>

/**
 * main - begining of the algorithm
 * @argc: number of argument
 * @argv: array
 * Return: succes(0)
 */

int main(int argc, char *argv[])
{
	(void)*argv;

	if (argc == 1)
	{
		argc = 0;
	}
	if (argc == 2)
	{
		argc = 1;
	}
	if (argc == 3)
	{
		argc = 2;
	}
	printf("%d\n", argc);

	return (0);
}
