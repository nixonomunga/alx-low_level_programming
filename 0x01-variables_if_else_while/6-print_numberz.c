/*
 * File: 6-print_numberz.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * main - entry
 *
 * Description: prints number 0 to 9
 *
 * Return: 0 always
 */

int main(void)
{
	char a = '0';

	for (; a < '9'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
