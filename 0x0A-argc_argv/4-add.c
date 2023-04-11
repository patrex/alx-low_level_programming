#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that prints the sum of nos passed at the command line
 * @argc: the number of arguments passed to the program
 * @argv: the string array that holds the list of command-line args
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i, tmp, sum = 0;
	int number_found  = 0, letter_found = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			tmp = atoi(argv[i]);
			if (tmp > 0)
			{
				++number_found;
				sum += tmp;
			}
			else
			{
				++letter_found;
				break;
			}
		}
		if (letter_found)
		{
			printf("Error\n");
			return (1);
		}
		if (number_found)
		{
			printf("%d\n", sum);
		}
	}
	else
		printf("%d\n", 0);
	return (0);
}
