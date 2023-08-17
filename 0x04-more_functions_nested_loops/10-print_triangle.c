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

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int i = 1;

		for (; i <= size; i++)
		{
			int a;

			for (a = size - i; a >= 1; a--)
			{
				_putchar(' ');
			}

			for (int c = 1; c <= i; c++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
