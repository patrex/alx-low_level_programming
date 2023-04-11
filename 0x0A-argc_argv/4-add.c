#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the sum of nos passed at the command line
 * @argc: the number of arguments passed to the program
 * @argv: the string array that holds the list of command-line args
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i, tmp, sum = 0;
	char *endptr;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		tmp = strtol(argv[i], &endptr, 10);
		if (*endptr)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += tmp;
		}
	}
	printf("%d\n", sum);
	return (0);
}
