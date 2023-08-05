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
	int mul;

	if (argc == 3)
	{
		mul = atio(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
