#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints diagnol of square matrix
 *
 * @a: pointer to matrix
 * @size: size of matrix
 *
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	int main_diagnol = 0;
	int sec_diagnol = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		main_diagnol += a[i * size + i];
		sec_diagnol += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", main_diagnol, sec_diagnol);
}
