#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first integer to swap
 * @b: second integerto swap
 */
void swap_int(int *a, int *b)
{
	int o;

	o = *a;
	*a = *b;
	*b = o;
}
