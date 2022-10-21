#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet,in lowercase,
 * followed by a new line.
 * Return: (0) success
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int n;

	n = 0;

	while (n < 10)
	{
		ch = 'a';
		while (ch < 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		n++;
	}
}

