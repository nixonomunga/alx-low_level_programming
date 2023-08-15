/*
 * File: 100-times_table.c
 *
 * Made by: Nixon
 */

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
	n[15][15];

	int x, y;

	for (x = 0; x <= 15; x++)
	{
		for (y = 0; y <= 15; y++)
		{
			result = x * y;

			if (result < 10 && result != 0)
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}

			else if (result >= 10 && result < 100)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

			else if (result >= 100)
			{
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}

		putchar('\n');
	}
}
