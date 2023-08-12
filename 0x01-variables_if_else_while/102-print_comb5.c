/*
 * File: 102-print_comb5.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * main - entry of program
 *
 * Description: print two two-digit numbers
 *
 * Return: 0 always
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = a + 1; b < 100; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a != 99 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
