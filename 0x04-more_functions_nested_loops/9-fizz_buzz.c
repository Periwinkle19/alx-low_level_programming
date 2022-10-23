#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the numbers from 1 to 100, followed by a new line.
 * for multiples of three print Fizz  and multiples of five print Buzz.
 * multiples of both three and five print FizzBuzz.
 * Return: 0
 */
int main(void)
{
	
	for (int a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
			printf("Fizz");
		else if (a % 5 == 0 && a % 3 != 0)
			printf("Buzz");
		else if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else
			printf(" %d", a);
		if (a < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

