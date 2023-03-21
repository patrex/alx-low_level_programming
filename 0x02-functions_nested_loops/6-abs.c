#include "main.h"
/**
 * _abs - determines the abs value of input int
 * @n: the integer under test
 * Return: 0 if lowercase
 */
int _abs(int n)
{
	return ((n % 10) > 0 ? n : (-1 * n));
}
