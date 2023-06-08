#include "variadic_functions.h"
/**
 * sum_them_all - sums all the numbers given as arg
 * @n: the count of numbers sent
 * Return: the sum of the args
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, num = 0;
	unsigned int i = 0;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	while (i++ < n && (num = va_arg(list, int)))
		sum += num;

	va_end(list);

	return (sum);
}
