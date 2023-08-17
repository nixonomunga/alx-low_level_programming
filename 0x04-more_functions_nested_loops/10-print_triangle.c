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
	int i = 0;

	for (; i < size; i++)
	{
		int a = 0;

		for (; a < i; a++)
		{
			_putchar('#');

			for(c = 0; c < a; c--)
			{
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
