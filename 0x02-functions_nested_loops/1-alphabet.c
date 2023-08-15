/*
 * File Name: 1-alphabet.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * main - entry of program
 *
 * Description: prints alphabet in lower case
 *
 * Return: 0 always
 */

void print_alphabet(void)
{
	char n = 'a';

	for (; n <= 'z'; n++)
	{
		putchar(n);
	}

	putchar('\n');
}

int main(void)
{
	print_alphabet();

	return (0);
}
