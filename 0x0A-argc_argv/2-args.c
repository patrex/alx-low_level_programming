#include <stdio.h>
/**
 * main - program that prints all the args inc the name
 * @argc: the number of arguments passed to the program
 * @argv: the string array that holds the list of command-line args
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
