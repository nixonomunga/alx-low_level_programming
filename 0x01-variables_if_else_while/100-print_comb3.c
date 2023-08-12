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
	int u = '0';
	int n = '0';

	for (; u <= '9'; u++)
	{
		for (; n <= '9'; n++)
		{
			putchar(u);
			putchar(n);

			if ((u != '9') || (u == '9' && n != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
