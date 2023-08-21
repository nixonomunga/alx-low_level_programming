#include <stdio.h>
#include "main.h"

/**
 * print_array - prints array followed by newline
 *
 * @a: array
 *
 * @n: number of elements of array to be printed
 *
 * Return: none
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(",");
		}
	}
	printf("\n");
}
