#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - writes the character c to stdout
 * Return: On success 0.
 * On error, 1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int i, n;
	char c[8];

	read(0, c, 8);
	for (i = 0; i < 8; i++)
		_putchar(c[i]);
	return (0);
}
