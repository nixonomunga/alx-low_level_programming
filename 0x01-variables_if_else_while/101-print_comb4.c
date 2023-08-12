/*
 * File: 101-print_comb4.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * main - entry of program
 *
 * Description: print three differrent combinations of digits
 *
 * Return: 0 always
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');

				if (a != 7 || b != 8 || c != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
