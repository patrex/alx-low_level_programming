#include <stdio.h>
/**
 *	main - program that prints every combo of two digits
 *	numbers sep by comma
 *	Return: returns 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = '0'; i <= '9'; l++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == '9' && j == '8' && k == '9' && l == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
