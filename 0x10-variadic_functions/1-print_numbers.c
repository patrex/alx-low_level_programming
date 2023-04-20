#include "variadic_functions.h"
/**
 * print_numbers - prints all input nos followed by a new line
 * @n: the count of numbers sent
 * @separator: the char to use as a sep'tor
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int i = 0;
	va_list list;

	va_start(list, n);

	for (; i < n;  i++)
	{
		num = va_arg(list, int);
		printf("%d", num);
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	va_end(list);
	puts("\n");
}
