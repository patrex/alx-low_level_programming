#include "main.h"

/**
 * helper - helps the function is_prime_number
 * @n: the number.
 * @c: the walker.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int helper(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + helper(n, c + 1));
}

/**
 * is_prime_number - determines if a number is prime or not
 * @n: the number
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (helper(n, 2));
}
