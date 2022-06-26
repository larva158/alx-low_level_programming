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
	int nb1, nb2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	nb1 = atoi(argv[1]);
	nb2 = atoi(argv[2]);
	result = nb1 * nb2;
	printf("%d\n", result);
	return (0);
}
