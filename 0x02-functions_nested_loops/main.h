int _putchar(char c);
void print_alphabet(void);
/**
 * print_alphabet - writes the character c to stdout
 *
 * Return: On success 0.
 */
void print_alphabet(void)
{
	int c = 'a';
        while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

