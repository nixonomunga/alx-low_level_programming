#include "main.h"

/**
 * print_diagonal - prints diagnol line
 *
 * @n: number of times to print
 *
 * Return: none
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int i = 0;

		for (; i <= n; i++)
		{
			int a = 0;

			for (; a <= i; a++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
