#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @c: - the char array
 * Return: Nothing
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			*(str + i) -= 32;
		i++;
	}
	return (c);
}
