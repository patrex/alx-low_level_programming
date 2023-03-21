#include "main.h"
/**
 * jack_bauer - determines the abs value of input int
 * Return: 0 if lowercase
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = '0'; i < '3'; i++)
	{
		for (j = '0'; j < '4'; j++)
		{
			for (k = '0'; k < '6'; k++)
			{
				for (l = '0'; l < '10'; l++)
				{
					_putcha(i);
					_putcha(j);
					_putcha(':');
					_putcha(k);
					_putcha(l);
					_putcha('\n');
				}

			}
		}
	}

	return (0);
}
