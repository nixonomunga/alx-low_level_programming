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

			if (product >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			else if (product < 10 && row != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}

			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
