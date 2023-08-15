/*
 * File Name: 2-print_alphabet_x10.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * @void: empty
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	for (; i < 9; i++)
	{
		char n = 'a';

		for (; n <= 'z'; n++)
		{
			putchar(n);
		}

		putchar('\n');
	}
}
