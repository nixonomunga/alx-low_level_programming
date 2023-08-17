#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of triangle
 *
 * Return: none
 */

void print_triangle(int size)
{
	int i = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (; i <= size; i++)
		{
			int a;

			for (a = size - i; a > 1; a--)
			{
				_putchar(' ');
			}

			for (int c = 0; c < size; c++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
