/*
 * File Name: 1-alphabet.c
 *
 * Made by: Nixon
 */

#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * @void: empty
 *
 * Return: void
 */

void print_alphabet(void)
{
	char n = 'a';

	for (; n <= 'z'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
