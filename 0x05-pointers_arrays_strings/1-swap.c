#include "main.h"

/**
 * swap_int - swaps integers
 *
 * @a: first integer to be swapped
 *
 * @b: second integer to be swapped
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int c = a, d = b;

	*a = d;
	*b = c;
}
