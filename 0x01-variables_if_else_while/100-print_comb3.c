/*
 * File: 100-print_comb3.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * main - entry of program
 *
 * Description: prints number combination 01 to 98
 *
 * Return: 0 always
 */

int main(void)
{
	int u, n;

	for (u = 0; u < 10; u++)
	{
		for (n = u + 1; n < 10; n++)
		{
			putchar(u + '0');
			putchar(n + '0');

			if (u != 8 || n != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
