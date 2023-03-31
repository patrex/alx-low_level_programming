#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @c: - the char array
 * Return: Nothing
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if ((c[i] >= 97) && (c[i] <= 122))
			*(c + i) -= 32;
		i++;
	}
	return (c);
}
