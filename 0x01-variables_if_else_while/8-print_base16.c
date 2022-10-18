#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: (0) success
 */
int main(void)
{
	int n;
	char ch;

	for (n = 0; n < 16 ; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch < 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
