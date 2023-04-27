#include <stdio.h>

/**
 * imain - execute before main
 * Return: nothing
 */

void __attribute__ ((constructor)) imain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

