/*
 * File: 5-print_numbers.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * main - entry
 *
 * Description: prints numbers
 *
 * Return: 0 always
 */

int main(void)
{
	char u = '0';

	for (; u < '10'; u++)
	{
		putchar(u);
	}

	putchar('\n');

	return (0);
}
