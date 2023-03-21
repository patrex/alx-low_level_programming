#include "main.h"
/**
 * _islower - determines if an input char is lowercase
 * @c: the character under test
 * Return: 1 if lowercase. 0 elsewhere
 */
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
