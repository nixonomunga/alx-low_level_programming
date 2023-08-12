/*
 * File: 7-print_tebahpla.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * main - entry of program
 *
 * Description: Alphabet in reverse
 *
 * Return: 0 always
 */

int main(void)
{
	char u = 'z';

	for (; u >= 'a'; u--)
	{
		putchar(u);
	}

	putchar(\n);

	return (0);
}
