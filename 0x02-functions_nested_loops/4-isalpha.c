#include "main.h"
/**
 * _isalpha - determines if an input char is lowercase, uppercase
 * @c: the character under test
 * Return: 1 if lowercase. 0 elsewhere
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : (c >= 'A' && c <= 'Z') ? 1 : 0);
}
