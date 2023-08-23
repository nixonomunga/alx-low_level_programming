#include "main.h"

/**
 * reverse_array - reverses array
 *
 * @a: array
 *
 * @n: number of elements in array
 *
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int i;
	int a;

	for (i = 0; i < (n / 2); i++)
	{
		a = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = a;
	}
}
