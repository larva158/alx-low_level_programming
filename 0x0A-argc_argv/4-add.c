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
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 1 && (sum % sum == 0))
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
