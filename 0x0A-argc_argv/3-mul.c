#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the product of two nos passed at the command line
 * @argc: the number of arguments passed to the program
 * @argv: the string array that holds the list of command-line args
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	if (argc > 2 && argc < 4)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
