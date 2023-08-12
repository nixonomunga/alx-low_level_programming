/*
 * File name: 9-print_comb.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * main - entry
 *
 * Description: prints combination of single numbers
 *
 * Return: 0 always
 */

int main(void)
{
	int a = '0';

	for (; a <= '9'; a++)
	{
		putchar(a);

		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
