/*
 * File Name: 9-times_table.c
 *
 * Made by: Nixon
 */

#include "main.h"

/**
 * times_table - prints the 9 timetable
 *
 * Return: none
 */

void times_table(void)
{
	int row;
	int col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			int product = row * col;

			if (col == 0)
			{
				_putchar(k + '0');
			}

			if (product < 10 && col != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}

			else if (product >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}

		_putchar('\n');
	}
}
