#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: character to stdout
 * Return: 1 if c is a letter,lowercase or uppercase or 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
