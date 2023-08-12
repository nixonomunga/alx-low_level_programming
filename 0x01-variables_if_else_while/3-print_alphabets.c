/*
 * File: 3-print_alphabets.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * main - prints alphaBET
 *
 * Description: prints both lower and upper-case
 *
 * Return: 0 always
 */

int main(void)
{
	char u = 'a', q = 'A';

	for (; u <= 'z'; u++)
	{
		putchar(u);
	}

	for (; q <= 'Z'; q++)
	{
		putchar(q);
	}

	putchar('\n');

	return (0);
}
