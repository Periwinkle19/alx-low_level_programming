#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: character to stdout
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
