#include "variadic_functions.h"
/**
 * print_strings - prints all input strings
 * @n: the count of strings sent
 * @separator: the char to use as a sep'tor
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *word;
	unsigned int i = 0;
	va_list list;

	va_start(list, n);

	for (; i < n;  i++)
	{
		word = va_arg(list, char *);
		if (word)
			printf("%s", word);
		else
			printf("(nil)");
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
