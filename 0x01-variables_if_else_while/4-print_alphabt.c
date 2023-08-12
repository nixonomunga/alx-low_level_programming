/*
 * File: 4-print_alphabt.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * main - alphabet except q and e
 *
 * Descriprion: using putchar to print alphabet
 *
 * Return: 0 always
 */

int main(void)
{
	char u = 'a';

	for (; u <= 'z'; u++)
	{
		if ((u != 'q' && u != 'e'))
		{
			putchar(u);
		}
	}

	putchar('\n');

	return (0);
}
