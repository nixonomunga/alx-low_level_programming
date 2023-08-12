/*
 * File: 8-print_base16.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * main - entry of program
 *
 * Description: Printing of Hexadecimal
 *
 * Return: 0 always
 */

int main(void)
{
	char u = '0';

	for (; u <= '9'; u++)
	{
		putchar(u);
	}

	for (u = 'a'; u <= 'f'; u++)
	{
		putchar(u);
	}

	putchar('\n');

	return (0);
}
