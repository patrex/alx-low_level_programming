#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program entry point
 * @argc: the number of argumnets
 * @argv: the array of args passed
 * Return: exit code corr. to prog state
 */
int main(int argc, char **argv)
{
	int num1, num2;
	char operator;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2][0];
	num2 = atoi(argv[3]);

	printf("%c\n", operator);

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", op(num1, num2));
	return (0);
}
