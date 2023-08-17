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
	int i, a, c;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		i = 1;

		for (; i <= size; i++)
		{
			for (a = size - i; a >= 1; a--)
			{
				_putchar(' ');
			}

			for (c = 1; c <= i; c++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
