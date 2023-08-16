#include "main.h"

/**
 * print_times_table - prints timestable upto 15
 *
 * @n: number of timestable
 *
 * Return: none
 */

void print_times_table(int n)
{
	int x, y, result;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			result = x * y;

			if (result < 10)
			{
				_putchar(result + '0');
				_putchar(' ');
				_putchar(' ');
			}

			else if (result >= 10 && result < 100)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar(' ');
			}

			else if (result >= 100)
			{
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
			}

			if (y < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
