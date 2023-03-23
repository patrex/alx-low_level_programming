#include "main.h"
/**
 * _islower - determines if an input char is uppercase
 * @c: the character under test
 * Return: 1 if lowercase. 0 elsewhere
 */
int _islower(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}