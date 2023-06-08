#include <stdio.h>
/**
 * main - program that prints the number of args to std
 * @argc: the number of arguments passed to the program
 * @argv: the string array that holds the list of command-line args
 * Return: returns 0
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
