#include "main.h"
/**
 * _puts - a function that prints a string,
 * followed by a new line, to stdout.
 * @str: character to stdout
 * Return: 0
 */
void _puts(char *str)
{
	int a;

	while (*(str + a))
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}
