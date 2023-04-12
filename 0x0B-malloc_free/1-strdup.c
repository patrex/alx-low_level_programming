#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns ptr to a copied string
 * @str: the string
 * Return: NULL on str being null or insufficient mem, the ptr to the new string
 */
char *_strdup(char *str)
{
	char *newstr;
	unsigned int i = 0, j;

	if (str == NULL)
		return (NULL);

	for (; *(str + i) != '\0'; i++)
		;

	newstr = (char *) malloc(sizeof(char) * (i + 1));

	if (newstr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		*(newstr + j) = *(str + j);


	return (newstr);
}
