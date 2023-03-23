#include "main.h"
/**
 * _isupper - determines if an input char is uppercase
 * @c: the character under test
 * Return: 1 if uppercase. 0 otherwise
 */
int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
