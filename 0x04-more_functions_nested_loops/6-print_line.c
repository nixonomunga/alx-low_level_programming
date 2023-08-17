#include "main.h"

/**
 * print_line - draws a straight line
 *
 * @n - number of times to be printed
 *
 * Return: none
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int i = 1;

		for (; i <= n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
