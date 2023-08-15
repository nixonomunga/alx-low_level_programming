/*
 * File name: 11-print_to_98.c
 *
 * Made by: Nixon
 */

#include "main.h"

/**
 * print_to_98 - prints number from n to 98
 *
 * @n: number to be printed from
 *
 * Return: none
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		if (n < 10)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}

		else if (n  >= 10)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}

		if ((n != 98) && (n >= 10))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
