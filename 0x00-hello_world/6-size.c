#include <stdio.h>

/**
 *	main - prints the sizes of primitives and exits
 *
 *	Return: returns 0
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long l2;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(l));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(l2));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
