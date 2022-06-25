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
	printf("%d\n", argc);

	return (0);
}
