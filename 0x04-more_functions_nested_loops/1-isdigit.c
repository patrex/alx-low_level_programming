#include "main.h"
/**
 * _isdigit - determines if an input char is a digit
 * @c: the character under test
 * Return: 1 if digit. 0 otherwise
 */
int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}
