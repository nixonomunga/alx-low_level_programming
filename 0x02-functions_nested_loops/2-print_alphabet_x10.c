/*
 * File Name: 2-print_alphabet_x10.c
 *
 * Made by: Nixon
 */

#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		char n = 'a';

		for (; n <= 'z'; n++)
		{
			_putchar(n);
		}

		_putchar('\n');
	}
}
