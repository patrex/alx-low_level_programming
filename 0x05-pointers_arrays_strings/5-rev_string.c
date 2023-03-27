#include "main.h"
/**
 * rev_string - reverses the input char array;
 * @s: the input string
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0;
	int k = 0;
	char tmp;

	while (s[len] != '\0')
		len++;
	len -= 1;
	if (s[len] == '\n')
		len -= 1;
	while (k < len)
	{
		tmp = *s(k);
		*s(k) = *s(len);
		*s(len) = tmp;
		len -= 1;
		k += 1;
	}
}
