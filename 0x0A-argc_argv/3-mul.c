#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of commandline arguments
 * @argv: pointers to an array of commandline arguments
 * Return: 0 (Sucess)
*/

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
