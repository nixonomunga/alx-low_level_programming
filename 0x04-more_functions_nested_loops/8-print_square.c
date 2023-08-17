#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: size of square
 *
 * Return: none
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int i = 0;

		for (; i < size; i++)
		{
			int a = 0;

			for (; a < i; a++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
